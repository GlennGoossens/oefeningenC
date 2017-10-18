#include <stdio.h>
#include <ctype.h>


char * alfab_kleinste(char **,int);

int main(int argc, char ** argv){
  int i;
  if(argc == 1){
    printf("Dag allemaal!\n");
  }else{
    /*for(i = 1;i<argc;i++){
      *argv[i] = toupper(*argv[i]);
      printf("Dag %s!\n",argv[i]);
    }*/
    char * s = alfab_kleinste(argv,argc - 1);
    *s = toupper(*s);
    printf("Dag %s!\n",s);
  }


  return 0;
}


char * alfab_kleinste(char ** voornamen, int lengte){
  voornamen++;
  char * kleinste = *voornamen;
  int i;
  for(i = 1; i < lengte;i++){
    if(**voornamen < *kleinste){
      kleinste = *voornamen;
    }
    voornamen++;
  }
  return kleinste;
}
