#include<stdio.h>
#include<string.h>

int  main()
{
	int i,key,first=0,last,mid,n,flag=0;;
	char arr[5][10]={"Vinu","Tumbagi","Swami","Sauradh","Aditya"};

	last=4;

	printf("\n\nEnter the no to be searched:");
	scanf("%d",&key);

	do
	{
		mid=(first+last)/2;
		if(strcmp(arr[mid],key)==0)
		{
			printf("Got it at:%d",mid+1);
			flag=1;
			break;

		}
		else if(strcmp(arr[mid],key)>0)
		{
			last=mid-1;
		}
		else
		{
			first=mid+1;
		}

	 }while(first<=last);

	 if(flag==0)
	 {
		printf("No not found");
	 }

	return 0;
}
