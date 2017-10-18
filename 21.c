#include <stdio.h>

int * plaats_van(const double[],int, double);
void plaats_ptr_op_getal(const double[],int,double **,double);
int * plaats_in_geordende_array_van(const double[],int,double);

int main(void){
  double array[] = {1.0,2.0,2.3,5.6,6.1,7.9};
  int size = sizeof(array)/sizeof(double);
  int *plaats = plaats_van(array,size,5.6);
  printf("\n%d\n",*plaats);

  double *pointer;
  plaats_ptr_op_getal(array,size,&pointer,5.6);
  printf("\n%.2f\n",*pointer);

  array[4] *= 2;
  printf("\n%.2f\n",*pointer);

  int * index_geordend = plaats_in_geordende_array_van(array,size,6.1);
  printf("ordered = %d\n",*index_geordend);

}

int * plaats_van(const double array[], int size, double getal){
  int index = 0;
  while(*(array + index) != getal && index < size){
    index++;
  }
  int *result;
  if(*(array + index) == getal){
     result = &index;
  }else{
     result = NULL;
  }
  return result;

}

void plaats_ptr_op_getal(const double array[],int size,double **pointer,double getal){
  int i = 0;
  while(*(array + i) != getal && i < size){
    i++;
  }
  *pointer = (array +i);
}

int * plaats_in_geordende_array_van(const double array[],int size,double getal){
  int index = 0;
  while(*(array + index) != getal && index < size && getal >= *(array + index)){
    index++;
  }
  printf("%f\n",*(array + index) );
  int * result;
  if(*(array + index) == getal){
    result = &index;
  }else{
    result = NULL;
  }
  return result;
}
