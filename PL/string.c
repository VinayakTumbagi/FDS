#include<stdio.h>
#include<string.h>
void len(char *p)
{
	int l=strlen(p);
	printf("Length of a string:%d",l);
}

void Palin(char *a)
{
	char t[30];
	strcpy(t,a);
	strrev(t);
	if(strcmp(t,a)==0)
		printf("It is a palindrome");
	else if(strcmp(t,a)>0 || strcmp(t,a)<0)
		printf("It is not a palindrome");
}

void copy(char *i)
{
	char t[40];
	strcpy(t,i);
	printf("String copied: %s",t);
}

void rev(char p[30])
{
	strrev(p);
	printf("String reversed: %s",p);
}

void substr(char *p)
{
	char k[30];
	int l=strlen(p);
	int i,j,a,flag=0;
	printf("Enter a string to check for substring:");
	scanf("%s",k);
	a=strlen(k);
	
	for(i=0;i<l;i++)
	{
		if(k[0]==p[i])
		{
			for(j=0;j<a;j++)
			{
				if(k[j]!=p[i+j])
				{
					flag=1;
					break;
				}
			}
		}
	}
	
	if(flag==1)
		printf("It's a substring!!!");
	else
		printf("It's not a substring!!");
	
}

int main()
{
	char a[50];
	int k=1;
	printf("Enter a string:");
	scanf("%s",a);
	int ch;
	
	while(k==1)
	{
	printf("1.Length of a string\n2.Palindrome\n3.String copy\n4.String reverse\n5.Substring");
	printf("\nEnter ur choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
				len(a);
				break;
		case 2:
				Palin(a);
				break;
		case 3:
				copy(a);
				break;
		case 4:
				rev(a);
				break;
		case 5:
				substr(a);
				break;
		default:
				printf("Wrong choice entered!!!!");
				
	}
	printf("\n\nDo u want to continue?(1/0):");
	scanf("%d",&k);
}
	
	
	return 0;
}
