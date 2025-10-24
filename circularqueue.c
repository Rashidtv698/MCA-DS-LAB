#include<stdio.h>
#define MAX_SIZE 3


int q[MAX_SIZE],REAR=-1,FRONT=-1;

void enqueue(int item)
{ 
	if((REAR + 1) % MAX_SIZE == FRONT)
	{
		printf("Queue is Full\n");
	}
	else
	{
		if(FRONT == -1)
		{
			FRONT=0;
		}
		REAR=(REAR+1)%MAX_SIZE;
		q[REAR]=item;

		
	}

}
void dequeue()
{ 
	if(FRONT==-1)
	{
		printf("Queue is Epmty\n");
	}
	else
	{
		
		printf("deleting element is:%d\n",q[FRONT]);
		if(FRONT==REAR)
		{
			FRONT=REAR=-1;
		}
		else
		{
			FRONT=(FRONT+1)%MAX_SIZE;
		}
			
	}
		

}


void display()
{
    if (FRONT == -1)
    {
        printf("Queue is Empty\n");
        return;
    }

    int i = FRONT;
    printf("Queue elements: ");
    while (1)
    {
        printf("%d ", q[i]);
        if (i == REAR)
            break;
        i = (i + 1) % MAX_SIZE;
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
		printf("1. Enqueue\n");	
		printf("2. dequeue\n");
		printf("3. display\n");
		printf("4.exit\n");
		
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				printf("Enter the element you want to Enqueue\n");
				scanf("%d",&item);
				enqueue(item);
				break;
			case 2:
				dequeue();
				break;
			case 3:
			        display();
		       		break;
		       	case 4: 
		       		option=0;
		       		break;
			default:
				printf("enter valid option\n");
				break;
				
		}
	
	}
}
