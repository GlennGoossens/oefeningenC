#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define AANTAL 6
#define LENGTE 81 /* aan te vullen */


typedef struct persoon persoon;
struct persoon {
  char naam[LENGTE];
  int leeftijd;
};


int main(){
  int i;
  char * namen[AANTAL] = {"Evi","Jaro","Timen","Youri","Ashaf","Jennifer"};
  int leeftijden[AANTAL] = {21,30,18,14,22,19};

  persoon *personen = malloc(AANTAL * sizeof(persoon));

  for(i = 0; i < AANTAL; i++){
    strcpy(personen[i].naam,namen[i]);
    personen[i].leeftijd = leeftijden[i];
  }

  for(i = 0; i < AANTAL; i++){
    printf("%s is %d jaar oud\n",personen[i].naam,personen[i].leeftijd);
  }

  free(personen);
  return 0;
}
