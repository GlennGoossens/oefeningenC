#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct knoop knoop;
struct knoop{
  int getal;
  knoop *next;
};

knoop * maak_gesorteerde_lijst_automatisch(int,int);
void voeg_getal_toe(knoop **,int);
void print_lijst(knoop *);
void verwijder_dubbels(knoop *);
void keerom(knoop **);

int main(){
  srand(time(NULL));
  knoop * l = maak_gesorteerde_lijst_automatisch(10,100);
  print_lijst(l);
  printf("\nnu worden dubbels verwijderd: \n");
  verwijder_dubbels(l); /* aan te vullen */
  printf("\nna verwijderen van dubbels: \n\n");
  print_lijst(l);
  printf("\n na omkeren van de lijst: \n\n");
  keerom(&l);
  print_lijst(l);

return 0;
}

knoop * maak_gesorteerde_lijst_automatisch(int aantal,int bovengrens){
  knoop *res = 0;
  knoop hulp;
  int i;
  for(i = 0; i < aantal;i++){
    int getal = rand()%(bovengrens);
    voeg_getal_toe(&res,getal);
  }
  return res;
}

void voeg_getal_toe(knoop ** res,int getal){
  knoop * hulp;
  knoop * m;

  if(*res == 0 || (*res)->getal > getal){
hulp = malloc(sizeof(knoop));
    hulp->next = *res;
    hulp->getal = getal;
    *res = hulp;
  }else{
      hulp = *res;
      while(hulp->next && hulp->next->getal < getal){
        hulp = hulp->next;
      }
    m = malloc(sizeof(knoop));
    m->getal = getal;
    m->next = hulp->next;
    hulp->next = m;
}

/*

*/
}

void print_lijst(knoop *  l){
  while(l){
    printf("getal = %d\n", l->getal);
    l = l->next;
  }
}

void verwijder_dubbels(knoop * l){
  while(l){
    if(l->next && l->getal == l->next->getal){
      printf("verwijderen van getal %d",l->next->getal);
      knoop * teVerwijderen = l->next;
      l->next = l->next->next;
      l = l->next;
      free(teVerwijderen);
    }else{
    l = l->next;
    }
  }
}

void keerom(knoop **l){
  knoop * vorige = 0;
  knoop * huidige = *l;
  knoop * volgende;

  while(huidige){
    volgende = huidige->next;
    huidige->next = vorige;
    vorige = huidige;
    huidige = volgende;
  }
  *l = vorige;
}
