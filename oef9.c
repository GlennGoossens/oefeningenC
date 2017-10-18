/* oefening 9 */

#include <stdio.h>

int faculteit(int);
int schrijf_faculteit(int);

int main(){
  int i;
  for(i = 0; i < 40 ;i++){
    schrijf_faculteit(i);
  }
}

int faculteit(int x){
  if(x == 0){
    return 1;
  }
  return x * faculteit( x - 1);
}

int schrijf_faculteit(int y){
  printf("%d\n",y );
  if(y == 0){
    return 1;
  }
  return y * schrijf_faculteit( y - 1);

}
