#include<stdio.h>


void mul(int a1[2][2],int b1[2][2],int c1[2][2])
{
	int i,j,k;
	   
   for(i=0;i<2;i++)
  {
  	for(j=0;j<2;j++)
  	{
  		for(k=0;k<2;k++)
  			
			c1[i][j]=c1[i][j]+(a1[i][k]*b1[k][j]);
	}
  }
  
  printf("Multiplication:\n\n");
  for(i=0;i<2;i++)
  {
  	for(j=0;j<2;j++)
  	{
  		printf("%d   ",c1[i][j]);	
	}
  }
   
}

void add(int a1[2][2],int b1[2][2],int c1[2][2])
{
	int i,j;
	 int *a,*b,*c;
	
   a=&a1[0][0];
   b=&b1[0][0];
   c=&c1[0][0];
   for(i=0;i<2;i++)
   {
	for(j=0;j<2;j++)
	{
	     *(c+i*2+j)=*(b+i*2+j)+*(a+i*2+j);

	}
   }
   printf("\n\nAddition of matrices:\n\n");
   for(i=0;i<2;i++)
   {
	for(j=0;j<2;j++)

	{
		
	       printf("%d\t\t",*(c+i*2+j));
	}
	printf("\n\n");
}
}

void transpose(int a[2][2],int b[2][2],int c[2][2])
{
	int i,j;
	printf("\nTranspose of a:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[j][i];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
	
	printf("\nTranspose of b:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=b[j][i];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
}

int main()
{
  int i,j,k;
   int arr1[2][2],arr2[2][2],arr3[2][2]{0,0,0,0};
   

   for(i=0;i<2;i++)
   {
	for(j=0;j<2;j++)
	{
		printf("Enter arr1[%d][%d]:",i,j);
		scanf("%d",&arr1[i][j]);
	}
   }

   for(i=0;i<2;i++)
   {
	for(j=0;j<2;j++)
	{
		printf("Enter arr2[%d][%d]:",i,j);
		scanf("%d",&arr2[i][j]);
	}
   }

   

   mul(arr1,arr2,arr3);
   add(arr1,arr2,arr3);
   transpose(arr1,arr2,arr3);
   
   
   	return 0;
  }
  

