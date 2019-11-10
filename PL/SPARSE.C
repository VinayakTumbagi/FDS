#include<stdio.h>
#include<conio.h>

void main()
{
	int a[3][3]={0,1,6,
		     0,7,0,
		     0,3,0};

	int b[3][3]={1,2,0,
		     0,4,0,
		     5,0,3};

	int sp[6][3];
	int i,j,k=1;
	int s1,s2;
	int count=0;
	int sp2[6][3];
	int sp3[15][3];
	clrscr();

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		     if(a[i][j]!=0)
		     {
			sp[k][0]=i;
			sp[k][1]=j;
			sp[k][2]=a[i][j];
			count++;
			k++;
		     }
		}
	}
	sp[0][0]=3;
	sp[0][1]=3;
	sp[0][2]=k;

	for(i=0;i<k;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",sp[i][j]);
		}
		printf("\n");

	}



	k=1;                    count=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		     if(b[i][j]!=0)
		     {
			sp2[k][0]=i;
			sp2[k][1]=j;
			sp2[k][2]=b[i][j];
			k++;
			count++;
		     }
		}
	}

	sp2[0][0]=3;
	sp2[0][1]=3;
	sp2[0][2]=k;

	printf("\n\n");
	for(i=0;i<k;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",sp2[i][j]);
		}
		printf("\n");

	}

	i=1,j=1,k=1;

	while(i<=sp[0][2] && j<=sp2[0][2])
	{
	   if(sp[i][0]==sp2[j][0])
	   {
		if(sp[i][1]==sp2[j][1])
		{
		   sp3[k][0]=sp[i][0];
		   sp3[k][1]=sp[i][1];
		   sp3[k][2]=sp[i][2]+sp2[j][2];

		   i++;
		   j++;
		   k++;
		}

		else if(sp[i][1]<sp2[j][1])
		{
		   sp3[k][0]=sp[i][0];
		   sp3[k][1]=sp[i][1];
		   sp3[k][2]=sp[i][2];

		   i++;
		   k++;
		}
		else
		{
			sp3[k][0]=sp2[j][0];
			sp3[k][1]=sp2[j][1];
			sp3[k][2]=sp2[j][2];

			j++;
			k++;
		}


	   }

	   else if(sp[i][0]<sp2[j][0])
	   {
		sp3[k][0]=sp[i][0];
		sp3[k][1]=sp[i][1];
		sp3[k][2]=sp[i][2];

		i++;
		k++;
	   }
	   else
	   {
		sp3[k][0]=sp2[j][0];
		sp3[k][1]=sp2[j][1];
		sp3[k][2]=sp2[j][2];

		j++;
		k++;
	   }


	}
	sp3[0][0]=3;
	sp3[0][1]=3;
	sp3[0][2]=sp[0][2]+sp2[0][2];

	printf("\n\n");


	for(i=0;i<k;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",sp3[i][j]);
		}
		printf("\n");
	}

/*s1=sp[0][2];
s2=sp2[0][2];

while(i<=s1)
{
	sp3[k][0]=sp[i][0];
	sp3[k][1]=sp[i][1];
	sp3[k][2]=sp[i][2];
}

while(j<=s2)
{
	sp3[k][0]=sp2[j][0];
	sp3[k][1]=sp2[j][1];
	sp3[k][2]=sp2[j][2];
} */

	getch();
}