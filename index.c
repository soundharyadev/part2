#include <stdio.h>

int main(void) {
	int t,i,j,m,a[10];
	scanf("%d",&t);
  printf("Enter the array elements:");
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<t;i++)
	{
		for(j=i+1;j<t;j++)
		{
			if(a[i]>a[j])
			{
			m=a[i];
			a[i]=a[j];
			a[j]=m;
			}
	}
	}
	printf("%d",a[t-2]);
	return 0;
}
