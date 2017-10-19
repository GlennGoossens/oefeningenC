#include <stdio.h>
#include <stdlib.h>

#define aantal 10
#define MAXAANTAL 6

char * lees();
char ** lees_meerdere();

int main(){
  int i;

  /*for(i=0; i<MAXAANTAL; i++){
    char * tekst = lees();
    printf("Ik las in %s.\n",tekst);
    free(tekst);
  }*/
  char ** string = lees_meerdere();
  for(i = 0; i < MAXAANTAL;i++){
  	if(string[i] != NULL){
  	printf("Ingelezen = %s !\n",string[i]);
  	free(string[i]);
  }
  }
  free(string);
  return 0;
}

char * lees(){
  char * str = malloc(sizeof(char) * aantal);
  fgets(str,aantal + 1,stdin);
  return str;
}

char ** lees_meerdere(){
	char ** strings = malloc(MAXAANTAL * sizeof(char*));
	int i;
	for(i = 0; i<MAXAANTAL;i++){
		strings[i] = malloc(sizeof(char) *aantal+1);
		fgets(strings[i],aantal,stdin);
		if(strcmp(strings[i],"STOP")!= 1){
			return strings;
		}
	}
	return strings;
}
