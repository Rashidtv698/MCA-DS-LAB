#include<stdio.h>

int add(int a,int b)
{  
	int result;     
	result=a+b;

	return(result);
}
int main()
{
	int r,a,b;
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	r=add(a,b);
	printf("%d",r);
}

