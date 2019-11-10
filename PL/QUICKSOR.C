#include<stdio.h>
#include<conio.h>


int split(int a[],int lower,int upper)
{
	int p,q,t,i;

	p=lower+1;
	q=upper;
	i=a[lower];

     while(q>=p)
     {

		while(a[p]<i)
			p++;

		while(a[q]>i)
			q--;

		if(q>p)
		{
			t=a[p];
			a[p]=a[q];
			a[q]=t;
		}
      }

      t=a[lower];
      a[lower]=a[q];
      a[q]=t;

      return q;

}


void quick(int a[],int lower,int upper)
{
	int i;
	if(upper>lower)
	{
		i=split(a,lower,upper);
		quick(a,lower,i-1);
		quick(a,i+1,upper);
	}
}



void main()
{
      int o,arr[8]={23,2,66,35,87,14,48,32};
      quick(arr,0,7);

      clrscr();

      printf("Sorted array:");
      for(o=0;o<8;o++)
	printf("%d ",arr[o]);

	getch();
}
