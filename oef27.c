#include <stdio.h>
#include <ctype.h>


int main(int argc, char ** argv){
  int i;
  if(argc == 1){
    printf("Dag allemaal!");
  }else{
    for(i = 1;i<argc;i++){
      *argv[i] = toupper(*argv[i]);
      printf("Dag %s!\n",argv[i]);
    }
  }


  return 0;
}
