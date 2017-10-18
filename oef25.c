#include <stdio.h>
#include <stdlib.h>

void wis(char *);

int main(){
	char s[] = "8d'a7!<t-)>+. -)4h&!e9)b*( )j'(e)!4\n8g|'92o!43e5d/.' 2 3g*(e('d22a'(a25n'(";
	wis(s);
	printf("%s",s);
}

void wis(char * s){
	char * t = s;
	while(*t){
		if((islower(*t)) || (isspace(*t)) ){
			*s++ = *t;
		}
		*t++;
	}
	*s = 0;
}
