#include<stdio.h>
#define MAX_SIZE 10


int s[MAX_SIZE],TOP=-1;


void push(int item)
{ 
	if(TOP>MAX_SIZE)
	{
		printf("Stack is Full\n");
	}
	else
	{
		TOP=TOP+1;
		s[TOP]=item;
		
	}

}
void pop()
{ 
	if(TOP<=-1)
	{
		printf("Stack is Epmty\n");
	}
	else
	{
		TOP--;
		
	}
		

}
void display()
{
	for(int i=TOP;i>-1;i--)
	{
		printf("%d ",s[i]);
	}
	printf("\n");
	
}
int main()
{
	int item,option;
	option=1;
	while(option!=0)
	{
		printf("Enter the options\n");
		printf("1. push\n");	
		printf("2. pop\n");
		printf("3.exit\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				printf("Enter the element you want to Push\n");
				scanf("%d",&item);
				push(item);
				printf("Stack :\n");
				display();
				break;
			case 2:
				pop();
				printf("Stack :\n");
				display();
				break;
			case 3:
			        option=0;
		       		break;
			default:
				printf("enter valid option\n");
				break;
				
		}
	
	}
}
