/* oefening 8 */

#include <stdio.h>
#include <stdlib.h>

int cijfer_som(int);

int main(){
  return cijfer_som(12345);
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
