#include<stdio.h>
#include<stdlib.h>
int main()
{
    int mat1[100][100],mat2[100][100],mul[100][100],m,n,p,q,i,j,k;
    int sum=0;
    printf("Enter the order of matrix first:");
    scanf("%d %d",&m,&n);
    printf("Enter the order of matrix second:");
    scanf("%d %d",&p,&q);
    if(n!=p)
    {
        printf("The multiplication of two matrix is not possible.\n");
        exit(0);
    }
    printf("Enter the elements of matrix first:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("mat1[%d][%d]=",i,j);
            scanf("%d",&mat1[i][j]);
        }       
    }
    printf("The entered matrix first is:\n ");
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            printf("%d\t",mat1[i][j]);
            printf("\n");
        }   
    }
    printf("Enter the elements of matrix second:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("mat2[%d][%d]=",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
        {
            for(i=0;i<p;i++)
            {
                for(j=0;j<q;j++)
                printf("%d\t",mat2[i][j]);
                printf("\n");
            }
        }
        printf("The product of two matrices is:\n");
        {
            for(i=0;i<m;i++)
            {
                for(j=0;j<q;j++)
                {
                    for(k=0;k<p;k++)
                    {
                        sum+=mat1[i][k]*mat2[k][j];
                        
                    }
                    mul[i][j]=sum;
                    sum=0;
                }
            }
                
        }
        {
            for (i= 0; i < m; i++)
            {
                for (j= 0; j< q; j++)
                printf("%d\t", mul[i][j]);
                printf("\n");
            } 
        }    
}       