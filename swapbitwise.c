#include<stdio.h>
int main()
{
int p,s;
scanf("%d",&p);
scanf("%d",&s);
printf("values before swapping %d %d",p,s);
p=p^s;
s=p^s;
p=p^s;
printf("values after swapping %d %d",p,s);
return 0;
}
