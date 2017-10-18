/* oefening 6 */

#include <stdio.h>  /* standard I/O */
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
sinus berekenen van 0.23 radialen
*/

int factorial(int);

int main(void){
  float radians;
  printf("Please enter a factual number\n");
  scanf("%f", &radians);
  printf("radians = %f",radians );


  int min = -3200;
  int max = 3199;

  srand(time(NULL));
 /*double radians = (rand() % (max + 1 - min)) + min;
radians /= 1000;*/

 int n;
 double result = 0;
 for(n = 0; n < 10; n++){
   int numerator = pow(-1,n);
   double denominator = factorial((2 * n) + 1);
   double x = pow(radians,(2*n) + 1);

   double res = (numerator/denominator) * x;
   result += res;
 }

 printf("sinus %f = %.3f\n", radians,result);
 printf("sinus solution with sine function = %f\n", sin(radians));

  return 0;
}

int factorial(int n){
  if(n == 0){
    return 1;
  }
  return n * factorial( n - 1);
}
