#include<stdio.h>
int main()
{
	int arr[50],i,sum=0,limit;
	
	printf("enter the number of elements of the arry:\n");
	scanf("%d",&limit);
	printf("enter %d numbers :\n",limit);
	if(limit>50)
	{
		printf("enter limt less than 50");
	}
	else
	{
		for(i=0;i<limit;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=0;i<limit;i++)
		{ 
			sum=sum+arr[i];
		}
		printf("\nsum of the %d numbers:%d\n",limit,sum);
	}
	return 0;
}
