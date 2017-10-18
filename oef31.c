#include <stdio.h>
#include <stdlib.h>

#define aantal 1000

char * lees();

int main(){
  int i;

  for(i=0; i<5; i++){
    char * tekst = lees();
    printf("Ik las in %s.\n",tekst);
    free(tekst);
  }
  return 0;
}

char * lees(){
  char * str = malloc(sizeof(char) * aantal);
  fgets(str,aantal + 1,stdin);
  return str;
}
