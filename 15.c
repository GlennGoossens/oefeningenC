/*
Schrijf een programma dat 20 gehele getallen genereert tussen 100 en 120 (grenzen inbegrepen) en
deze ook op het scherm toont. Daarna worden alle getallen die niet gekozen werden, in stijgende
volgorde uitgeschreven. Kijk kritisch na!
Heb je de grenzen en het aantal te genereren getallen in constanten bewaard?
*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 120
#define MIN 100
#define n 20


/*
  EX!!!
  aanwezigheidstabel bool tabel en kijken of het al is gepasseerd of niet
  = hulp array
*/

int main(){
  int array[n] = {0};
  int overschot[n] = {0};
  int i;
  for(i = 0; i < n;i++){
    overschot[i] = 100 + i;
  }


  for(i = 0; i < n; i++){
      int random_number = (int) rand() % (MAX - MIN + 1) + MIN;
      array[i] = random_number;
      overschot[random_number - 100] = 0;
      printf("%d\n",random_number);
  }

printf("_____________\n");

for(i = 0; i < n; i++){
  if(overschot[i] !=0) printf("%d\n",overschot[i]);
}

}
