#include<stdio.h>
#include"functii.h"

void citire(int a[][10], int n, int m)
{
	for(int i=0;i<n;++i)
	{
		printf("Raundul %d: ",i);
		for(int j=0;j<m;++j)
			scanf("%d",&a[i][j]);
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

void parceleVarf(int a[][10], int n, int m)
{
	printf("Coordonatele parcelelor \"varf\":\n");
	int aux[12][12];
	for(int i=0;i<=n+1;++i)
		for(int j=0;j<=m+1;++j)
		{
			if(i==0||i==n+1||j==0||j==m+1) aux[i][j]=0;
			else aux[i][j]=a[i-1][j-1];	
		}
	for(int i=0;i<=n+1;++i)
		for(int j=0;j<=m+1;++j)
		{
			if(aux[i][j]>aux[i-1][j-1] && aux[i][j]>aux[i-1][j] && aux[i][j]>aux[i][j+1] && aux[i][j]>aux[i][j-1] &&
					aux[i][j]>aux[i][j+1] && aux[i][j]>aux[i+1][j-1] && aux[i][j]>aux[i+1][j] && aux[i][j]>a[i+1][j+1])
				printf("(%d, %d) adica %d\n",i-1,j-1,aux[i][j]);
		}
}
