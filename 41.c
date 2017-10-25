#include <stdio.h>
#include <stdlib.h>

void voeg_getal_toe(int,knoop**);

int main(){

}

void voeg_getal_toe(int g, knoop **l) {
  knoop *h, *m;
  if (*l == 0 || g <= (*l)->getal) {
    h = (knoop*) malloc(sizeof(knoop));
    h->getal = g; h->next = *l; *l = h;
  } else {
    h = *l;
    while (h->next != 0 && h->next->getal < g)
      h = h->next;
      m = h->next;
      h->next = (knoop*) malloc(sizeof(knoop));
      h = h->next; h->getal = g; h->next = m;
    }
}
