#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};   

struct node *header =NULL;

int counter=0;

void push(int item)
{
	if (counter<=10)
	{
		struct node *newnode;
		newnode=(struct node *) malloc(sizeof(struct node));
		newnode->data=item;
		newnode->link=NULL;
		
		if(header == NULL)
		{
			header=newnode;	
			counter=counter+1;
		}
		else
		{
			newnode->link=header;
			header=newnode;
			counter=counter+1;
		}
	}
	else
	{
	printf("STACK IS FULL");
	}
	
}
void pop()
{
	if (counter > 0)
	{
		if(header==NULL)
		{
			printf("No value in stack");
		}
		else
		{
			struct node *ptr=header;
			header=header->link;
			free(ptr);
		}
	}
	else
	{
		printf("staCK IS FULL");
	}
	
		
}
void display()
{
	struct node *ptr;
	ptr=header;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->link;
	}
	printf("\n");
}
int main()
{
	
	
	int item,option,key;
	option=1;
	while(option!=0)
	{
		printf("Enter the options\n");
		printf("1. PUSH\n");	
		printf("2. POP\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				printf("Enter the element to Insert \n");
				scanf("%d",&item);
				push(item);
				counter=counter+1;
				break;
			case 2:
				printf("deleting....\n");
				pop();
				counter=counter-1;
				break;
			case 3:
			       	display();
				break;
		       	case 4: 
		       		option =0;
				break;
			default:
				printf("enter valid option\n");
				break;	
		}
	
	} 
	return 0;
}
