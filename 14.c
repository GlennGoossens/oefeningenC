#include <stdio.h>

void schuifop(char[],int n);
void print(char[],int n);

int main(){

char rij[] = {'s','a','p','a','p','p','e','l'};
int length = sizeof(rij)/sizeof(char);
schuifop(rij,length);
schuifop(rij,length);
schuifop(rij,length);
print(rij,length);

}

void schuifop(char rij[],int n){
int i;
char eerste = rij[0];
for(i = 1; i < n; i++){
  rij[i - 1] = rij[i];
}
rij[n-1] = eerste;

}

void print(char rij[],int n){
  printf("_____________\n");
int i;
  for(i = 0; i < n;i++){
    printf("%c",rij[i] );
  }

    printf("_____________\n");
}
