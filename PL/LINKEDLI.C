#include<stdio.h>
#include<conio.h>
#include<alloc.h>

struct node
{
	int data;
	struct node *link;
}*start=NULL;

void add(int d)
{
	struct node *temp,*t;

	temp=(struct node *)malloc(sizeof(struct node));
	temp->link=NULL;
	temp->data=d;

	if(start==NULL)
	{
		start=temp;

	}
	else
	{
	    t=start;
	    while(t->link!=NULL)
	    {
		t=t->link;
	    }
	    t->link=temp;
	}
}

void display()
{
	struct node *t;

	if(start==NULL)
		printf("EMPTY!!!!!!");

	else
	{
		t=start;
		while(t!=NULL)
		{
			printf("\n%d",t->data);
			t=t->link;
		}

	}
}

void addbeg(int d)
{
	struct node *temp;
       //	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=d;
	temp->link=start;
	start=temp;
}

void del(int no)
{
	struct node *t,*t1;
	t=start;
	t1=start->link;
	if(t==NULL)
		printf("Empty list");
	else if(t->data==no)
	{
		start=start->link;

	}
	else
	{
		while(t1!=NULL)
		{
		     if(t1->data==no)
		     {
			t->link=t1->link;
			break;

		     }
		}
		if(t1==NULL)
		{
			printf("Data not found");
		}




	}

}

void sort()
{
	struct node *a,*b;
	int op;
	a=start;
	b=start->link;

	while(a!=NULL)
	{
		while(b!=NULL)
		{
			if(a->data>b->data)
			{
			       op=a->data;
			       a->data=b->data;
			       b->data=op;
			}
		      b=b->link;
		}

	     a=a->link;
	}
}
void main()
{
	int ch,a;
	int k=1;
	clrscr();

	while(k==1)
	{
       printf("1.Insert  2.Add at Beginning  3.Delete   4.Display   5.Sort");
       printf("\nEnter ur choice:");
       scanf("%d",&ch);

       switch(ch)
       {
		case 1:
			printf("Enter no:");
			scanf("%d",&a);
			add(a);
			break;
		case 2:
			printf("Enter no:");
			scanf("%d",&a);
			addbeg(a);
			break;

		case 3:
			printf("Enter no:");
			scanf("%d",&a);
			del(a);
			break;

		case 4:
			display();
			break;

		case 5:
			sort();
			break;

       }

       printf("\n\nMenu?(1/0):");
       scanf("%d",&k);
	}
	getch();
}