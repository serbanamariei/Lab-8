#include<stdio.h>
#include<stdlib.h>
#include"functii.h"

double **citireMatrice(int n, int m)
{
	printf("Introduceti valorile din matrice:\n");
	double **matrice=0;
	matrice=(double **)malloc(n*sizeof(double *));
	if(matrice==0)
	{
		fprintf(stderr,"Memorie insuficienta\n");
		exit(EXIT_FAILURE);
	}
	for(int i=0;i<n;++i)
	{
		matrice[i]=0;
		matrice[i]=(double *)malloc(m*sizeof(double));
		if(matrice[i]==0)
		{
			fprintf(stderr,"Memorie insuficienta\n");
			exit(EXIT_FAILURE);
		}
	}

	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
		{
			printf("matrice[%d][%d] = ",i,j);
			scanf("%lf",&matrice[i][j]);
		}

	return matrice;
}

void afisare(double **matrice, int n, int m)
{
	printf("Matricea dvs:\n\n");
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
		{
			printf(" %.2lf",matrice[i][j]);
		}
		printf("\n");
	}
}
