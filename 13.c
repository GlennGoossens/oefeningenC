#include <stdio.h>

int index_van(int,int[],int);

int main(){
  int array[] = {1,2,3,4,5};
  int length = sizeof(array)/sizeof(int);
  int getal = index_van(5,array,length);
  printf("%d\n",getal );
}

int index_van(int getal, int array[],int n){
  int i = 0;
  while( getal != array[i] && i < n){
    i++;
  }

  return i == n ? -1 : i;
}
