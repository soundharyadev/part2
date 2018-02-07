#include <stdio.h>
int main()
{
	int n,t1=0,t2=1,t,i;
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%d\n",t1);
		t=t1+t2;
		t1=t2;
		t2=t;
	}
return 0;
}
