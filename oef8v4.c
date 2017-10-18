/* oefening 8 */

#include <stdio.h>
#include <stdlib.h>

int cijfer_som(int);
int cijfersom_herhaald(int);
int cijfersom_rec(int);

int main(){
  printf("\ncijfersom_herhaald = %d\n",cijfersom_herhaald(12345));
  printf("\ncijfersom_rec = %d\n", cijfersom_rec(12345));
}

int cijfersom_rec(int som_rec){
  return som_rec > 10 ? cijfersom_herhaald(som_rec):cijfer_som(som_rec);
}

int cijfersom_herhaald(int som_herhaald){
  int mid_result = cijfer_som(som_herhaald);
  if(mid_result > 10){
    cijfersom_herhaald(mid_result);
  }
  printf("mid_result = %d", mid_result);
  return mid_result;
}

int cijfer_som(int som){
  if(som < 0){
    printf("number is not positive");
    exit(0);
  }
int result = 0;
int new_som = som;
int last_number = 0;

while(new_som > 0){
  last_number = new_som % 10;
  new_som = new_som / 10;
  printf("last_number = %d\n", last_number);
  printf("new_som = %d\n",new_som );
  result += last_number;
  printf("intermediate result = %d\n", result);
}

printf("\n result = %d\n", result);
  return result;
}
