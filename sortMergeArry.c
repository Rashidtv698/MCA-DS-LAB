#include<stdio.h>
int display(int arr3[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr3[i]);
	}
	printf("\n");
	
	return 0;
}
int sort(int arr[],int n)
{ 
	int temp;
	for(int i=0;i<n;i++)
	{
	
		for(int j=i+1;j<n;j++)
		{	
			if(arr[i]>arr[j])
			{

				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			  
			}
		}
	}
	
	return 0;
}
int merge(int s1,int s2,int arr1[],int arr2[],int merg[])
{
        int limit=s1+s2;
        int j;

	for(int i=0;i<s1;i++)
	{
		merg[i]=arr1[i];
	}
	for(int i=s1;i<limit;i++,j++)
	{
		merg[i]=arr2[j];
	}
	return 0;
}

int main()
{
	int arr1[50],arr2[50],i,limit1,limit2,size,merg[100];
	
	printf("enter the number of elements of the 1st arry:\n");
	scanf("%d",&limit1);
	
	printf("enter %d numbers :\n",limit1);
	for(i=0;i<limit1;i++)
	{
		
		printf("Enter %d of arry",i+1);
		scanf("%d",&arr1[i]);
	}
	
	printf("\nenter the number of elements of the  2nd arry:\n");
	scanf("%d",&limit2);
	 
	printf("enter %d numbers :\n",limit2);
	for(i=0;i<limit2;i++)
	{
		printf("Enter %d of arry",i+1);
		scanf("%d",&arr2[i]);
	}
	
	size=limit1+limit2;
	
	printf("1st array\n");
	display(arr1,limit1);
	
	printf("Sorted 1st arry\n");
	sort(arr1,limit1);
	
	display(arr1,limit1);
	printf("2nd array\n");
	display(arr2,limit2);
	
	printf("Sorted 2nd array\n");
	sort(arr2,limit2);
	display(arr2,limit2);
	
	printf("Merged arry\n");
	merge(limit1,limit2,arr1,arr2,merg);
	display(merg,size);
	
	printf("Sorted Merged arry\n");
	sort(merg,size);
	display(merg,size);
	
	return 0;
}

	
	
	
	
	
	

