/* oefening 7 */
#include <stdio.h>
#include <stdlib.h>


int main(){
  int a, b, c, d, e;
  int sum;
  printf("Give 5 positive numbers (spaced in between) :");
  scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
  if(a < 0 || b < 0 || c < 0 || d < 0 || e < 0){
    printf("Enter a positive number\n");
    exit(0);
  }else{
    sum = a + b + c + d + e;
    printf("\n %d \n", sum);
  }

}
