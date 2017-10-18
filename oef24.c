#include <stdio.h>
#include <ctype.h>

void verzetNaarEersteHoofdletter(const char **);
const char * pointerNaarEersteKleineLetter(const char*);
void schrijf(const char*,const char*);
void verplaats_naar_eerste_hoofdletter(char**);

int main(){
  const char zus1[50] = "sneeuwWITje";
  const char zus2[50] = "rozeROOD";
  const char* begin;
  const char* eind;
  begin = zus1;
  verzetNaarEersteHoofdletter(&begin);
  eind = pointerNaarEersteKleineLetter(begin);
  schrijf(begin,eind); /* schrijft 'WIT' uit */
  printf("\n");
  begin = zus2;
  verzetNaarEersteHoofdletter(&begin);
  eind = pointerNaarEersteKleineLetter(begin);
  schrijf(begin,eind); /* schrijft 'ROOD' uit */
  return 0;
}

void verzetNaarEersteHoofdletter(const char ** string){
  while((**string < 'A' || **string > 'Z') && **string){
    (*string)++;
  }
}

const char * pointerNaarEersteKleineLetter(const char * string){
  while((*string < 'a' || *string > 'z') && *string){
    string++;
  }
  return string;
}

/*oefening uit slides*/
void verplaats_naar_eerste_hoofdletter(char **s){
  while(**s && !isupper(**s)) (*s)++;
  if(**s == 0) *s = 0;
}

void schrijf(const char * begin,const char * einde){
  while(*begin != *einde){
    printf("%c",*begin);
    begin++;
  }
}
