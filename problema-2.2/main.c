#include<stdio.h>
#include"functii.h"

int main()
{
	int a[10][10],b[10][10],n,m;
	printf("Numar linii: ");
	scanf("%d",&n);
	printf("Numar coloane: ");
	scanf("%d",&m);
	printf("Cititi valorile pentru A[][]:\n\n");
	citire(a,n,m);
	printf("Cititi valorile pentru B[][]:\n\n");
	citire(b,n,m);

	printf("Matricea A:\n");
	afisare(a,n,m);
	printf("Matricea B:\n");
	afisare(b,n,m);

	int at[10][10],bt[10][10];
	transpusa(a,at,n,m);
	transpusa(b,bt,n,m);

	printf("A transpusa:\n");
	afisare(at,n,m);
	printf("B transpusa:\n");
	afisare(bt,n,m);

	printf("Verificarea relatiei (A*B)t=Bt*At :\n");
	int p[10][10];
	produs(p,a,b,n,m);
	int pt[10][10];
	transpusa(p,pt,n,m);
	produs(p,at,bt,n,m);
	afisare(pt,n,m);
	printf("\n\nComparat cu:\n\n");
	afisare(p,n,m);

	return 0;
}
