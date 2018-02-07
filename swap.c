#include<stdio.h>
void main()
{
int j,k,t;
printf("\n enter the first number");
scanf("%d",&j);
printf("\n enter the second number");
scanf("%d",&k);
t=j;
j=k;
k=t;
printf("\n after swapping %d %d",j,k);
return 0;
}
