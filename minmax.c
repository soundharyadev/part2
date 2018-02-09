#include<stdio.h>
#define SIZE 50
int main()
{
	int arr[SIZE];
	int i,size,min,max;
	printf("enter the size of the array\n");
	scanf("%d",&size);
	printf("Enter the elements to be entered in the array\n");
	for(i=0;i<size;i++)
	{
	scanf("%d",&arr[i]);
	}
	min=arr[0];
	for(i=0;i<size;i++)
	{
		if(arr[i]<min)
		{
		min=arr[i];
		
			
		}
		else{
			max=arr[i];
		}
	}
	printf("The minimum element is: %d\n",min);
	printf("The maximum element is: %d\n",max);
	return 0;
}
