#include <stdio.h>

typedef struct {
	int waarde,aantal_delers;
	int *delers;
}Deeltal;

void schrijf_ints(int *);
void schrijf_deeltal(Deeltal);

int main(){
	Deeltal deeltal;
	deeltal.waarde = 6;
	deeltal.aantal_delers =3;
	int d[3] = {1,2,3};
	deeltal.delers = d;
	schrijf_deeltal(deeltal);
	
}

void schrijf_ints(int * ints){
	while(*ints){
		printf("%d-",*ints);
		ints++;
	}
}

void schrijf_deeltal(Deeltal d){
	printf("%d ",d.waarde);
	schrijf_ints(d.delers);
}
