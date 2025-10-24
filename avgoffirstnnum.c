#include<stdio.h>
int main()
{
	int num, sum=0,i=1;
	printf("enter the number:");
	scanf("%d",&num);
	do
	{
		sum=sum+i;
		i=i+1;
	}while(i<=num);
	printf("the average of the %d number is : %d \n",num,sum/num);
	return 0;
}
