#include<stdio.h>
#include"functii.h"

void citire(int stocuri[][10], int n, int m)
{
	for(int i=0;i<n;++i)
	{
		printf("Linia %d: ",i);
		for(int j=0;j<m;++j)
		{
			scanf("%d",&stocuri[i][j]);
		}
	}
}

void afisare(int a[][10], int n, int m)
{
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

void citireV(int p[], int m)
{
	for(int i=0;i<m;++i)
		scanf("%d",&p[i]);
}

void suma(int s[][10], int a[][10], int b[][10], int n, int m)
{
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
		{
			s[i][j]=a[i][j]+b[i][j];
		}
}

void afisareV(int a[], int n)
{
	for(int i=0;i<n;++i) printf("%d ",a[i]);
	printf("\n");
}

void calculPlata(int plata[],int preturi[], int comenzi[][10], int n, int m)
{
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
		{
			plata[i]=comenzi[i][j]*preturi[j];
		}
}
