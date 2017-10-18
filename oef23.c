#include <stdio.h>

void my_upper(char[]);

int main(){
  char string[] = "snEEuwwITJE<3!!";
  my_upper(string);
  printf("%s\n",string);
}

void my_upper(char string[]){
  if(*string >= 'a' && *string <= 'z'){
    *string -= 32;
  }
  while(*string++){
    if(*string >= 'A' && *string <= 'Z'){
      *string += 32;

    }
  }

}
