/* oefening 2 */

#include <stdio.h>  /* standard I/O */

int main(void){
  int i;
  for(i = 0 ;i <= 64; i++){
    printf("%o  %d  %x\n", i,i,i);
  }
  return 0;
}
