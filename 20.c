t   =>  0   11  20  62  40  50
pt  =>  11   62   62
ppt ->  0

pt[1]++;  //gaat naar 30 verwijzen
pt[2] = pt[1]; //gaat naar 30 verwijzen
*pt[1] += 1; //30 wordt 31
*pt[2] *= 2; //31 wordt 62
int ** ppt = &pt[0]; // pointer ppt bijgemaakt
(*ppt)++; // pointer naar 10 verzetten
**ppt += 1; // 10 wordt 11
