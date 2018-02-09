#include<stdio.h>
int main()
{
int a[50],avg=0,n,i;
printf("Enter the number of items :\n");
scanf("%d",&n);
printf("Enter the values of the items:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
avg=avg+a[i];
}
avg=avg/n;
printf("Average:%d\n",avg);
return 0;
}
