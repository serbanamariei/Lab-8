#include<stdio.h>
#include"functii.h"

int main()
{
	int n,m;
	int a[10][10],b[10][10],s[10][10],p[10][10];
	int alegere;
	printf("nr linii = ");
	scanf("%d",&n);
	printf("nr coloane = ");
	scanf("%d",&m);
	printf("\nIntroduceti matricea A:\n\n");
	citire(a,n,m);
	printf("\nIntroduceti matricea B:\n\n");
	citire(b,n,m);
	int ok=1;
	printf("Matricea A:\n\n");
	afisare(a,n,m);
	printf("Matricea B:\n\n");
	afisare(b,n,m);
	while(ok)
	{
		printf("\nAlegeti ce doriti sa faceti:\n\n");
		printf("1) Suma\n");
		printf("2) Produs\n");
		printf("alegere --> ");
		scanf("%d",&alegere);

		switch(alegere)
		{
			case 1:{
					   suma(s,a,b,n,m);
					   printf("Matricea suma:\n\n");
					   afisare(s,n,m);
				   }
			break;
			case 2:{
					   produs(p,a,b,n,m);
					   printf("Matricea produs:\n\n");
					   afisare(p,n,m);
				   }
			break;
			default: printf("Alegere invalida!\n");
			break;
		}

		printf("Doriti sa faceti altceva? 1-DA 0-NU\n");
		printf("Alegeti --> ");
		scanf("%d",&ok);
	}

	return 0;
}
