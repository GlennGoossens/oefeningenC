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
knoop * merge(const knoop *,const knoop *);

int main(){
  srand(time(NULL));
knoop * m = maak_gesorteerde_lijst_automatisch(10,1000);
knoop * n = maak_gesorteerde_lijst_automatisch(5,1000);
printf("\nLIJST m:\n"); print_lijst(m);
printf("\nLIJST n:\n"); print_lijst(n);
printf("\nDeze worden gemerged. \n\n");
knoop * mn = merge(m,n);
printf("\nLIJST m: \n"); print_lijst(m);
printf("\nLIJST n: \n"); print_lijst(n);
printf("\nRESULTAAT: \n"); print_lijst(mn);
 /* aan te vullen */
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


knoop * merge(const knoop *a ,const knoop *b){
	knoop * merge = (knoop *) malloc(sizeof(knoop));
  knoop * hulp;

    printf("Start merging\n");
  if(a->getal < b->getal){
    merge->getal = a->getal;
    printf("mergen van getal %d\n",a->getal);
    a = a->next;
  }else{
    merge->getal = b->getal;
    printf("mergen van getal %d\n",b->getal);
    b = b->next;
  }
  hulp = merge;

  while(a && b){
    hulp->next = malloc(sizeof(knoop));
    hulp = hulp->next;
    if(a->getal < b->getal){
      hulp->getal = a->getal;
        printf("mergen van getal %d\n",a->getal);
      a = a->next;
    }else{
      hulp->getal = b->getal;
        printf("mergen van getal %d\n",b->getal);
      b = b->next;
    }
  }
  while(a){
    hulp->next = malloc(sizeof(knoop));
    hulp = hulp->next;
    hulp->getal = a->getal;
    a = a->next;
  }
  while(b){
    hulp->next = malloc(sizeof(knoop));
    hulp = hulp->next;
    hulp->getal = b->getal;
    b = b->next;
  }
  hulp->next = 0;

	return merge;
}
