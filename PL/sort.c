#include<stdio.h>


void bubble(int a[30],int n)
{
	int i,j,temp,flag;
	printf("Bubble sort:\n");
	
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
			break;
		
		printf("\nPass %d:",i+1);
		
		for(j=0;j<n;j++)
		{
			printf("  %d",a[j]);
		}
	}
}


void selection(int a[20],int n)
{
	int i,j,temp,flag=0;
	printf("\n\nSelection sort:");
	
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
				flag=1;
			}	
		}
		if(flag==0)
			break;
		printf("\nPass %d:",i+1);
		for(j=0;j<n;j++)
		{
			printf("%d ",a[j]);
		}
		
	}
}

void insertion(int a[30],int n)
{
	int i,j,temp;
	
	printf("\nInsertion sort:\n");
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
		
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
					
			}
		}
		printf("\nPass %d: ",i+1);	
		for(j=0;j<n;j++)
		{
			printf("%d ",a[j]);
		}
	}
	
}
int main()
{
	int a[30],b[30],c[30];
	int i,n,ch;
	printf("Enter length of array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter:");
		scanf("%d",&a[i]);
		b[i]=a[i];
		c[i]=a[i];
	}
	
	printf("\n1.Bubble sort\n2.Selection sort\n2.Insertion sort\n\n");
	printf("Enter ur choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
				bubble(a,n);
				break;
		case 2:
				selection(b,n);
				break;
		case 3:
				insertion(c,n);
				break;
		default:
			printf("Wrong choice entered!!!");						

	}
	
	return 0;
}
