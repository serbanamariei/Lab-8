#include<stdio.h>
#include"functii.h"

int main()
{
	int a[10][10],n;
	printf("nr linii si coloane = ");
	scanf("%d",&n);

	printf("Citim matricea A:\n");
	citire(a,n,n);
	printf("Matricea A:\n");
	afisare(a,n,n);
	int at[10][10];
	transpusa(a,at,n,n);
	printf("Transpusa matricii A:\n");
	afisare(at,n,n);
	int eye[10][10];
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j)
		{
			if(i==j) eye[i][i]=1;
			else eye[i][j]=0;
		}
	int rel1[10][10];
	produs(rel1,a,at,n,n);
	printf("Comparam:\n");
	afisare(rel1,n,n);
	printf("Cu:\n");
	afisare(eye,n,n);

	return 0;
}
