#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"functii.h"

int main()
{
	int n,m;
	printf("nr linii = ");
	scanf("%d",&n);
	printf("nr coloane = ");
	scanf("%d",&m);
	
	double **matrice=citireMatrice(n,m);
	afisare(matrice,n,m);

	for(int i=0;i<n;++i)
	{
		memset(matrice[i],0,m*sizeof(double));
		free(matrice[i]);
		matrice[i]=0;
	}

	memset(matrice,0,n*sizeof(double *));
	free(matrice);
	matrice=0;

	return 0;
}
