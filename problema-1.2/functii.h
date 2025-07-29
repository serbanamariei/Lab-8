#ifndef FUNCTII_H_
#define FUNCTII_H_

#define ETAJE 5
#define AP 10

void consum(int l1[][AP], int l2[][AP], int n, int m);
void subsol(int sl1[], int sl2[], int m);
void calcpret(int pretAP[][AP], int consumTOTAL[][AP], int pret, int n, int m);
void pierderi(int consumAP[][AP], int subsol[], int n, int m);
void ctotal(int total[][AP], int subsolTOTAL[], int subsol1[], int subsol2[], int l1[][AP], int l2[][AP], int n, int m);
void afisare(int matrice[][AP], int n, int m);
void afisareV(int v[], int m);

#endif
