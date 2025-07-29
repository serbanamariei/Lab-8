#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"functii.h"

void consum(int l1[][AP], int l2[][AP], int n, int m)
{
	printf("Introduceti consumul per apartament pentru luna 1:\n");
	for(int i=0;i<n;++i)
	{
		printf("\nEtajul %d:\n",i);
		for(int j=0;j<m;++j)
		{
			printf("consum ap %d: ",j);
			scanf("%d",&l1[i][j]);
		}
	}

	printf("Introduceti consumul per apartament pentru luna 2:\n");
	for(int i=0;i<n;++i)
	{
		printf("\nEtajul %d:\n",i);
		for(int j=0;j<m;++j)
		{
			printf("consum ap %d: ",j);
			scanf("%d",&l2[i][j]);
		}
	}
}

void subsol(int sl1[], int sl2[], int m)
{
	printf("\nConsumul apometrelor din subsol dupa prima luna:\n");
	for(int i=0;i<m;++i)
	{
		printf("col %d: ",i);
		scanf("%d",&sl1[i]);
	}
	printf("\nConsumul apometrelor din subsol dupa a doua luna:\n");
	for(int i=0;i<m;++i)
	{
		printf("col %d: ",i);
		scanf("%d",&sl2[i]);
	}
}

void calcpret(int pretAP[][AP], int consum[][AP], int pret, int n, int m)
{
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
		{
			pretAP[i][j]=consum[i][j]*pret;
		}
	}
}

void pierderi(int consumAP[][AP], int subsol[], int n, int m)
{
	printf("\nPierderi:\n");
	for(int j=0;j<n;++j)
	{
		int s=0;
		for(int i=0;i<m;++i) s+=consumAP[i][j];
		if(s!=subsol[j]) printf("Sunt pierderi pe coloana %d\n",j);
	}
}

void ctotal(int total[][AP], int subsolTOTAL[], int subsol1[], int subsol2[], int l1[][AP], int l2[][AP], int n, int m)
{
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
		{
			total[i][j]=l1[i][j]+l2[i][j];
		}
	}

	for(int j=0;j<m;++j) subsolTOTAL[j]=subsol1[j]+subsol2[j];
}

void afisare(int matrice[][AP], int n, int m)
{
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
		{
			printf("%d ",matrice[i][j]);
		}
		printf("\n");
	}
}

void afisareV(int v[], int m)
{
	for(int i=0;i<m;++i)
	{
		printf("%d ",v[i]);
	}
}
