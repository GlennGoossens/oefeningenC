/* oefening 10 */

#include <stdio.h>

int ggd( int, int);

int main(){
  int a,b;
  printf("geef 2 cijfers op");
  scanf("%d %d",&a,&b);
  ggd(a,b);
}

int ggd(int a, int b){
int mod = a % b;
printf("modolo = %d",mod);
if(mod == 0){
  printf("oplossing is %d\n", b);
  return a;
    }else{
      printf("nieuwe ggd(%d,%d)",b,mod);
return ggd(b, mod);
  }
}
