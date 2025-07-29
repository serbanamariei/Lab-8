#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"functii.h"

int main()
{
	int n,m,pret;
	printf("nr niveluri = ");
	scanf("%d",&n);
	printf("nr apartamente = ");
	scanf("%d",&m);
	printf("pretul / metru cub = ");
	scanf("%d",&pret);

	int l1[ETAJE][AP],l2[ETAJE][AP],consumTOTAL[ETAJE][AP];
	int subsol1[AP],subsol2[AP],subsolTOTAL[AP];
	int pretAP[ETAJE][AP];
	consum(l1,l2,n,m);
	printf("\nConsumul per apartament dupa prima luna:\n\n");
	afisare(l1,n,m);
	printf("\nConsumul per apartament dupa a doua luna:\n\n");
	afisare(l2,n,m);
	subsol(subsol1,subsol2,m);
	printf("\nConsumul in apometrele de la subsol dupa prima luna:\n");
	afisareV(subsol1,m);
	printf("\nConsumul in apometrele de la subsol dupa a doua luna:\n");
	afisareV(subsol2,m);
	
	ctotal(consumTOTAL,subsolTOTAL,subsol1,subsol2,l1,l2,n,m);
	printf("\nConsumul total in urma celor 2 luni per apartament:\n");
	afisare(consumTOTAL,n,m);
	printf("\nConsumul total la apometrele de la subsol in urma celor 2 luni:\n");
	afisareV(subsolTOTAL,m);

	calcpret(pretAP,consumTOTAL,pret,n,m);
	printf("\nCat trebuie sa plateasca dupa cele 2 luni fiecare apartament:\n");
	afisare(pretAP,n,m);

	pierderi(consumTOTAL,subsolTOTAL,n,m);

	return 0;
	
}
