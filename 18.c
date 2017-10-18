#include <stdio.h>
#define SIZE 10

void zoek_extremen(int[]);

int main(){
  int array[SIZE] = {1,2,3,4,5,6,7,8,9,10};
  zoek_extremen(array);

}

void zoek_extremen(int array[]){
  int i;
  int max = -1;
  int min = 100;
  for(i = 0; i < SIZE;i++){
    if(max < array[i]){
      max = array[i];
    }
    if(min > array[i]){
      min = array[i];
    }
  }
  printf("max = %d\n",max);
  printf("min = %d\n",min);
}
