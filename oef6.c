/* oefening 6 */

#include <stdio.h>  /* standard I/O */
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>

/*
sinus berekenen van 0.23 radialen
*/

double factorial(double);
double power(double,double);

int main(void){
  int min = -3200;
  int max = 3199;

  srand(time(NULL));
 double radians = (rand() % (max + 1 - min)) + min;
radians /= 1000;

 int n = 0;
 double result = 0;
 double term = radians;
 /* template oplossing
 som =
 teller =
 noemer =

 while(...){
 teller = ...;
 noemer = ...;
 som += teller/noemer;
}
 */

while(boolean == 0){
  printf("term is %f \n\n", term);
    term = (-1) * term * (radians*radians) / ((n+1)*(n+2));
    result += term;
    n += 2;
}
 /*   MET WHILE DOEN
 for(n = 0; n < 10; n++){
   int numerator = power(-1,n);
   double denominator = factorial((2 * n) + 1);
   double x = power(radians,(2*n) + 1);

   double res = (numerator/denominator) * x;
   result += res;
 }*/

 printf("sinus %f = %.3f\n", radians,result);
 printf("sinus solution with sine function = %f\n", sin(radians));

  return 0;
}

double factorial(double n){
  if(n == 0){
    return 1;
  }
  return n * factorial( n - 1);
}

double power(double a, double n){
  int result = 1;
  int i;
  for(i=0; i < n;i++){
    result *= a;
  }
  return result;
}
