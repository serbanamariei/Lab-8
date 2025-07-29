#include<stdio.h>
#include"functii.h"

int main()
{
	int a[10][10],n,m;
	printf("nr randuri = ");
	scanf("%d",&n);
	printf("nr parcele = ");
	scanf("%d",&m);

	printf("\n\nCititi altitudinile fiecarei parcele:\n");
	citire(a,n,m);
	printf("\n\nAltitudinea fiecarei parcele:\n");
	afisare(a,n,m);
	parceleVarf(a,n,m);

	return 0;
}
