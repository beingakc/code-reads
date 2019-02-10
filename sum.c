#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,m,n,p,q;
	int mat1[10][10];int mat2[10][10];int sum[10][10];
	printf("Enter order of first matrix:\t");
	scanf("%d%d",&m,&n);
	printf("\nEnter elements of mat1:\t ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
 	{
	scanf("%d",&mat1[i][j]);
	}
	}
	printf("\nEnter order of second matrix:\t");
	scanf("%d %d",&p,&q);
	printf("\nEnter elements of mat2:\t ");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
	{
		scanf("%d",&mat2[i][j]);
	}
	}
	if(m==p&&n==q)
	{
		printf("\nThe addition of matrix is\n ",sum[i][j]);
		for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
	{
	    sum[i][j]=mat1[j][j]+mat2[i][j];
		printf("%d\t",sum[i][j]);
	}
	}
	}
}
