#include<stdio.h>
#include"functii.h"

int main()
{
	int platap,n,m;
	printf("plata pentru o zi de lucru = ");
	scanf("%d",&platap);
	printf("n (nr pitici) = ");
	scanf("%d",&n);
	printf("m (nr rafturi) = ");
	scanf("%d",&m);
	
	int stocuri[10][10],comenzi[10][10];
	printf("Cititi stocurile initiale ale piticilor:\n");
	citire(stocuri,n,m);
	printf("Cititi comenzile piticilor:\n");
	citire(comenzi,n,m);
	int pret[10];
	printf("Cititi preturile celor %d produse: ",m);
	citireV(pret,m);
	printf("\n\nStocurile initiale ale piticilor:\n");
	afisare(stocuri,n,m);
	printf("\n\nComenzile piticilor:\n");
	afisare(comenzi,n,m);
	printf("\n\nPreturile fiecarui produs:\n");
	afisareV(pret,m);
	printf("\n\nStocul piticilor dupa ce starostele s-a intors de la magazin:\n");
	int s[10][10];
	suma(s,stocuri,comenzi,n,m);
	afisare(s,n,m);
	int plata[10];
	calculPlata(plata,pret,comenzi,n,m);
	printf("\n\nCat trebuie sa plateasca fieacre pitic pentru comanda sa:\n");
	afisareV(plata,n);

	return 0;
}
