#include<stdio.h>
int main()
{
	int a,largest=0,i=1;
	while(i<=5)
	{
		printf("enter the %d number:",i);
		scanf("%d",&a);
		if(a>largest)
		{
			largest=a;
		}
		i=i+1;
	}
	printf("the largest of the 5 number is : %d\n",largest);
	return 0;
}
