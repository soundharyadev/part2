#include<stdio.h>
int main()
{
	int i,a,b[20];
	printf("Enter the size\n");
	scanf("%d",&a);
	printf("Enter the number of elements:\n");
	for(i=0;i<=a;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<=a;i++)
	{
		printf("\n%d %d",b[i],i);
	}
	return 0;
	
}
