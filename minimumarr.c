#include<stdio.h>
#define SIZE 50
int main()
{
	int arr[SIZE];
	int i,size,min,max;
	printf("enter the size of the array");
	scanf("%d",&size);
	printf("Enter the elements to be entered in the array");
	for(i=0;i<size;i++)
	{
	scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=0;i<size;i++)
	{
		if(max<arr[i])
		{
		max=arr[i];
		
			
		}
	}
	printf("The minimum element is: %d",max);
	return 0;
}
