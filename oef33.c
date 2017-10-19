#include <stdio.h>
#include <string.h>

#define AANTAL_WOORDEN 10
#define GEMIDDELDE_LENGTE_WOORDEN 7
#define LENGTE_ARRAY_T 80
/*(gebruik AANTAL_WOORDEN en GEMIDDELDE_LENGTE_WOORDEN om dit te berekenen)
(voorbeeld: AANTAL_WOORDEN + GEMIDDELDE_LENGTE_WOORDEN)*/

void lees(char ** pt){
 /* gebruik schuivende pointers, geen indexering */
 while(*pt != '\0'){
 	char woord[10];
	scanf("%s",&woord);
	*pt = &woord[0];
	printf("%s\n",*pt);
	*pt++;
 }

}

void schrijf(char ** pt){
	
}

int main(){
char* pt[AANTAL_WOORDEN+1]; /* zodat je ook nog een nullpointer kan wegsteken op het einde van de pointertabel */
pt[AANTAL_WOORDEN+1] = '\0';
char t[LENGTE_ARRAY_T];
pt[0] = t;
printf("Geef %d woorden in:\n",AANTAL_WOORDEN);
lees(pt); /* leest alle woorden in */
schrijf(pt); /* schrijft alle woorden onder elkaar uit*/
return 0;
}
