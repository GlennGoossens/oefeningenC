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
knoop * merge(const knoop *,const knoop *,int, int);
int size(const knoop *);

int main(){
  srand(time(NULL));
knoop * m = maak_gesorteerde_lijst_automatisch(10,1000);
knoop * n = maak_gesorteerde_lijst_automatisch(5,1000);
printf("\nLIJST m:\n"); print_lijst(m);
printf("\nLIJST n:\n"); print_lijst(n);
printf("\nDeze worden gemerged. \n\n");
int size_m = size(m);
int size_n = size(n);
knoop * mn = merge(m,n,size_m,size_n);
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


knoop * merge(const knoop *a ,const knoop *b,int size_a, int size_b){
	
	int total_size = size_a + size_b;
	knoop * merge = malloc(total_size*sizeof(knoop));
	
	while(a && b ){
		if(a->getal < b->getal){
			voeg_getal_toe(&merge,a->getal);
			merge = merge->next;
			a = a->next;
			printf("Merged in number : %d\n",merge->getal);
		}else{
			voeg_getal_toe(&merge,b->getal);
			merge = merge->next;
			b = b->next;
			printf("Merged in number : %d\n",merge->getal);
		}
	}	
	while(a){
			voeg_getal_toe(&merge,a->getal);
			merge = merge->next;
			a = a->next;
			printf("Merged in number : %d\n",merge->getal);
	}
	while(b){
			voeg_getal_toe(&merge,b->getal);
			merge = merge->next;
			b = b->next;
			printf("Merged in number : %d\n",merge->getal);
	}
	return merge;
}

int size(const knoop * l){
	int i = 0;
	while(l){
		i++;
		l = l->next;
	}
	return i;
}













