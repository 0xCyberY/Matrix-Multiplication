#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a[100][100],b[100][100],c[100][100],i,j,k,sum=0,m,n,p,q;
   printf("Enter the row and column of first matrix\n");
   scanf("%d%d",&m,&n);
   printf("Enter the row and column of second matrix\n");
   scanf("%d%d",&p,&q);
   if(n!=p)
   {
	printf("Matrix mutiplication is not possible\n");
	exit(0);
   }
   else
   {
	printf("Enter the First matrix:\n");
	for(i=0;i<m;i++)
	{
	   for(j=0;j<n;j++)
	   {
		scanf("%d",&a[i][j]);
	   }
	}
	printf("Enter the Second matrix:\n");
	for(i=0;i<p;i++)
	{
	   for(j=0;j<q;j++)
	   {
		scanf("%d",&b[i][j]);
	   }
	}
	for(i=0;i<m;i++)
	{
	   for(j=0;j<q;j++)
	   {
		c[i][j]=0;
		for(k=0;k<n;k++)
		{
		c[i][j]= c[i][j]+a[i][k]*b[k][j];
		}
	   }
	}
}
printf("The multiplication of two matrix is\n");
for(i=0;i<m;i++)
{
   printf("\n");
   for(j=0;j<q;j++)
   {
	printf("%d\t",c[i][j]);
   }
}
printf("\n");
return 0;
}
