#include <stdio.h>

int * plaats_van(const double[],int, double);
void plaats_ptr_op_getal(const double[],int,double **,double);
double * plaats_in_geordende_array_van(const double[],int,double);

int main(void){
  double array[] = {1.0,2.0,2.3,5.6,6.1,7.9};
  int size = sizeof(array)/sizeof(double);
  int *plaats = plaats_van(array,size,5.6);
  printf("\n%d\n",*plaats);

  double *pointer;
  plaats_ptr_op_getal(array,size,&pointer,5.6);
  printf("\n%.2f\n",*pointer);



  double * index_geordend = plaats_in_geordende_array_van(array,size,6.1);
  printf("ordered = %f\n",*index_geordend);
	array[4] *= 2;
	printf("\n%.2f\n",*pointer);
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

double * plaats_in_geordende_array_van(const double array[],int size,double getal){
  int left = 0;
  int right = size -1;
  int index = size/2;

  while(array[index] != getal){
  	if(left > right){
  		return 0;
	  }
	  index = (left + right)/2;
	  if(array[index] < getal){
	  	left = index +1;
	  }else if(array[index] > getal){
	  	right = index -1;
	  }
  }

  double *result = &array[index];
  return result;
}
