#include<stdio.h>
int main()
{
	int num=0,sum=0;
	printf("enter a number mult table");
	scanf("%d",&num);
	
	for(int i=0;i<=10;i++){
		sum=num+i;
		printf("%d * %d = %d \n",num,i,sum);
		}
return 0;
}
