/*
Schrijf een programma dat tekstuele input van de gebruiker, afgesloten met een $-teken, verwerkt.
Van elke letter wordt bijgehouden hoe dikwijls hij voorkomt. Hierbij worden hoofdletters
meegerekend bij de overeenkomstige kleine letters. Daarna wordt er een histogram van gemaakt,
en dit op twee manieren.

Je schrijft en gebruikt drie procedures:
    ´e´en die de tekst inleest/verwerkt,
    ´e´en die een horizontaal staafdiagram tekent
    ´e´en die een vertikaal staafdiagram tekent.
*/

#include <stdio.h>
#include <stdlib.h>
#define n 26

void inlezen(int[]);
void horizontaal(const int[]);
void verticaal(const int[]);
int maximum(const int[]);

int main(){
  int freq[n] = {0};

  inlezen(freq);
  horizontaal(freq);
  verticaal(freq);

}

void inlezen(int freq[]){
  char c;
  while(scanf("%c", &c) !=0 && c != '$'){
    freq[ c - 'a'] += 1;
  }
}

void horizontaal(const int freq[]){
  char a = 'a';
  int i,j;
  for(i = 0; i < n -1; i++){
    printf("char = %c :\t",a+i);
    for(j = 0; j < freq[i];j++){
     printf("*");
  }
  printf("\n");
  }
}

void verticaal(const int freq[]){
  char a = 'a';
  int max;
  max = maximum(freq);
  int i,j;
  for(i = max;i > 0;i--){
    for(j = 0; j < n;j++){
      if(freq[j] >= i){
        printf("%c",a + j);
      }else{
        printf(" ");
      }
    }
    printf("\n");
  }
}

int maximum(const int freq[]){
  int max = -1;
  int i = 0;
  for(i = 0; i <n;i++){
    if(max < freq[i]){
      max = freq[i];
    }
  }
  return max;
}
