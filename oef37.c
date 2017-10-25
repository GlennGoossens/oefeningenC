#include <stdio.h>
#include <stdlib.h>

typedef struct Knoop Knoop;
struct Knoop{
  int d;
  Knoop * opv;
};

void voeg_vooraan_toe(int, Knoop **);
void print_lijst(Knoop *);

int main(){
  Knoop * l = 0;
  voeg_vooraan_toe(7, &l);
  voeg_vooraan_toe(3, &l);
  print_lijst(l);
  return 0;
}

void voeg_vooraan_toe(int getal,Knoop ** k){
  Knoop * hulp = (Knoop *) malloc(sizeof(Knoop));
  hulp->d = getal;
  hulp->opv = *k;
  *k = hulp;
}

void print_lijst(Knoop *  l){
  while(l){
    printf("getal = %d\n", l->d);
    l = l->opv;
  }
}
