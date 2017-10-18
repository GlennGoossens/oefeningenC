#include <stdio.h>

void schrijf_even_posities(char[],int);

int main(){
  char letters [] = {'p','o','r','e','o','i','f','o','i','e','c','i','i',':','a','-','t','('};

  int length = sizeof(letters)/sizeof(char);

  schrijf_even_posities(letters,length);

}

void schrijf_even_posities(char array[],int n){
  int i;
  for(i = 0; i < n;i+=2){
    printf("%c",array[i]);
  }
}
