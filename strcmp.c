#include<stdio.h>
void main()
{
	char a[50], b[50];
	int i;
	scanf("%s\n",&a);
	scanf("%s",&b);
	if(a==b)
	{
		printf("%s",a);
	}
	else if(b>a)
	{
	printf("%s",b);
	}
}
