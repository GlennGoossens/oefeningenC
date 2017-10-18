main(){
int i=7, j;
double d;
int *ip, *jp, *tp;
double *dp;
const int * p1;
int * const p2 = &i;
int t[25];
int k;
for(k = 0; k < 25; k++){
t[k] = 10*k;
}
/* 1*/ i = j; //j heeft geen waarde dus nutteloos
/* 2*/ jp = &i; //OK
/* 3*/ j = *jp; //OK j wordt 7
/* 4*/ *ip = i; //FOUT pointer verwijst naar niets dus kan ook niet derefereren
/* 5*/ ip = jp; //OK
/* 6*/ &i = ip; //FOUT adressen kan je niet aanpassen
/* 7*/ (*ip)++; //OK eerst waarde ophalen en dan +1

//*ip++ = eerst pointer opvragen en dan verzetten
//ip++ = pointer verzetten

/* 8*/ *ip *=i; //OK
/* 9*/ ip++; //OK MAAR HEEFT GEEN NUT want je kent het adres niet
/*10*/ tp = t+2; //OK
/*11*/ j = &t[5] - tp; //OK MAAR heeft enkel zin als de pointers naar dezelfde array wijzen
                      //om te kijken wat de afstand is
/*12*/ t++; //NIET OK pointer verzetten
/*13*/ (*t)++; //OK eerst waarde ophalen en dan +1 HIER: element op index 0 verhogen
/*14*/ *tp--; //FOUT - GEEN NUT eerst pointer opvragen en dan verzetten
/*15*/ j = (*tp)++; //OK
/*16*/ i = *tp++; //OK
                //i = 21 en TP pointer wordt verzet naar volgende index (hier enkel omdat pointer op array staat)
/*17*/ p1 = ip; //OK
/*18*/ jp = p1; //NIET OK
/*19*/ (*p1)--; //NIET OK CONST pointer
/*20*/ dp = &i; //FOUT types kloppen niet
/*21*/ dp = ip; //FOUT types kloppen niet
/*22*/ jp = p2; //OK
/*23*/ p2 = p1; // NIET OK
/*24*/ *p2 += i; //OK ophalen en dan + i;
}
