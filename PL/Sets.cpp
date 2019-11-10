#include<stdio.h>
static int count=0,count1=0;

void uni(int a[20],int b[20],int c[40],int p,int q)
{
	int flag,i,j;
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			if(a[i]==b[j])
			{
				c[count]=a[i];
				count++;
				break;
			}
			
		}
	}
	count1=count;		
	for(i=0;i<p;i++)
	{
		flag=0;
		for(j=0;j<count1;j++)
		{
			if(a[i]==c[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			c[count]=a[i];
			count++;
	    }
		
	}
	
	for(i=0;i<q;i++)
	{
		flag=0;
		for(j=0;j<count1;j++)
		{
			if(b[i]==c[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
		
			c[count]=b[i];
			count++;
		}	
		
	}
	
	for(i=0;i<count;i++)
		printf("\n%d",c[i]);
}

void inter(int a[20],int b[20],int c[40],int p,int q)
{
	int i,j;
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			if(a[i]==b[j])
			{
				c[count]=a[i];
				count++;
				break;
			}
			
		}
	}
	
	for(i=0;i<count;i++)
	{
		printf("\n%d",c[i]);
	}
	
	
}

void diff(int a[20],int b[20],int c[40],int p,int q)
{
	int e[30],k=0,d[30],l=0;
	int i,j,flag;
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			if(a[i]==b[j])
			{
				d[l]=a[i];
				l++;
				break;
			}
			
		}
	}
	
	
	for(i=0;i<p;i++)
	{
		flag=0;
		for(j=0;j<l;j++)
		{
			if(a[i]==d[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			c[count]=a[i];
			count++;
	    }
		
	}
	printf("A-B=\n");
	for(i=0;i<count;i++)
		printf("%d\n",c[i]);
	
	
	for(i=0;i<q;i++)
	{
		flag=0;
		for(j=0;j<l;j++)
		{
			if(b[i]==d[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
		
			e[k]=b[i];
			k++;
		}	
		
	}
	
	printf("B-A=\n");
	for(i=0;i<k;i++)
		printf("\n%d",e[i]);
}

void symdif(int a[20],int b[20],int c[40],int p,int q)
{
	int d[30],l=0;
	int i,j,flag;
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			if(a[i]==b[j])
			{
				d[l]=a[i];
				l++;
				break;
			}
			
		}
	}
	
	
	for(i=0;i<p;i++)
	{
		flag=0;
		for(j=0;j<l;j++)
		{
			if(a[i]==d[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			c[count]=a[i];
			count++;
	    }
		
	}
	
	for(i=0;i<q;i++)
	{
		flag=0;
		for(j=0;j<l;j++)
		{
			if(b[i]==d[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
		
			c[count]=b[i];
			count++;
		}	
		
	}
	
	printf("Symmetric difference:");
	for(i=0;i<count;i++)
		printf("\n%d",c[i]);
}



int main()
{
	int i,k=1,a[20],b[20],c[40],d[40],e[40],f[40];
	int p,q,ch;
	printf("Enter elements of set A:");
	scanf("%d",&p);
	for(i=0;i<p;i++)
	{
		printf("Enter:");
		scanf("%d",&a[i]);
		
	}

	printf("Enter elements of set B:");
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		printf("Enter:");
		scanf("%d",&b[i]);
		
	}
	
	while(k==1)
	{
	
	printf("\n\n1.Union\n2.Intersection\n3.Difference\n4.Symmetric difference");
	printf("\nEnter ur choice:");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
		   uni(a,b,c,p,q);
		   break;
		case 2:
		   inter(a,b,d,p,q);
		   break;
		case 3:
			diff(a,b,e,p,q);
		   break;
		case 4:
			symdif(a,b,f,p,q);
			break;
		default:
			printf("Wrong choice entered!");		
	}
	
	printf("\nWant to enter more?:");
	scanf("%d",&k);
}
	return 0;
}


