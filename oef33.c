
#include <stdio.h> #include <string.h>
#define AANTAL_WOORDEN 10
#define GEMIDDELDE_LENGTE_WOORDEN 7
#define LENGTE_ARRAY_T AANTAL_WOORDEN * (1+GEMIDDELDE_LENGTE_WOORDEN)

<<<<<<< HEAD
/* versie met indexering van pt */ /*
void lees(char ** pt){
int i;
for(i=0; i<AANTAL_WOORDEN; i++){
scanf("%s",pt[i]);
pt[i+1] = pt[i]+strlen(pt[i])+1; }
pt[AANTAL_WOORDEN]=0; }*/
/* versie met schuivende pt */
void lees(char ** pt){
  int i;
  for(i=0; i<AANTAL_WOORDEN; i++){
    scanf("%s",*pt);
    *(pt+1) = *pt+strlen(*pt)+1;
    pt ++;
    }
  *pt=0;
}

void schrijf(char const * const * pt){
  while(*pt!=0){
    printf("\n%s",*pt);
    pt ++;
  }
=======
void lees(char *(*pt)){
 /* gebruik schuivende pointers, geen indexering */
 	
}

void schrijf(char *(*pt)){

>>>>>>> 70b9efc2df9f62b03805e11f5c37c71a711cdab1
}
int main(){
<<<<<<< HEAD
  char* pt[AANTAL_WOORDEN+1]; /* zodat je ook nog een nullpointer kan wegsteken op het einde van de pointertabel */
  char t[LENGTE_ARRAY_T]; pt[0] = t;
  printf("Geef %d woorden in:\n",AANTAL_WOORDEN); lees(pt);
  schrijf(pt);
  return 0;
=======
	char* pt[AANTAL_WOORDEN+1]; /* zodat je ook nog een nullpointer kan wegsteken op het einde van de pointertabel */
	
	char t[LENGTE_ARRAY_T];
	pt[0] = t;
	
	printf("Geef %d woorden in:\n",AANTAL_WOORDEN);
	lees(pt); /* leest alle woorden in */
	schrijf(pt); /* schrijft alle woorden onder elkaar uit*/
	
return 0;
>>>>>>> 70b9efc2df9f62b03805e11f5c37c71a711cdab1
}
