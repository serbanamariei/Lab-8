#include<stdio.h>
#include"functii.h"

void citire(int a[][10], int n, int m)
{
	for(int i=0;i<n;++i)
	{
		printf("linia %d: ",i);
		for(int j=0;j<m;++j) scanf("%d",&a[i][j]);
	}
}

void afisare(int a[][10], int n, int m)
{
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
			printf("	%d",a[i][j]);
		printf("\n");
	}
}

void suma(int s[][10], int a[][10], int b[][10], int n, int m)
{
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
			s[i][j]=a[i][j]+b[i][j];
}

void produs(int p[][10], int a[][10], int b[][10], int n, int m)
{
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<m;++j) p[i][j]=0;
	}

	for(int j=0;j<m;++j)
		for(int i=0;i<n;++i)
			p[i][j]+=a[i][j]*b[j][i];
}
