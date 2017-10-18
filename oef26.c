#include <stdio.h>

void pivoteer(char *, char *, char *);
void schrijf(char *, char *);

int main(){
	char tekst[] = {'b','d','?','z','g','o','e','z','e','b',' ','d','i','g','!','h','o','s','v'};
	pivoteer(tekst+7,tekst+12,tekst+9);
	schrijf(tekst+4,tekst+15);
}

void pivoteer(char * begin, char * einde, char * pivot){
	char hulp;
	while(*begin != *pivot && *einde-- != *pivot){
		hulp = *begin;
		*begin = *einde;
		*einde = hulp;

		*begin++;
	}
}

void schrijf(char * begin, char * na_einde){
	while(*begin != * na_einde){
		printf("%c",*begin);
		*begin++;
	}
}
