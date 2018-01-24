#include<stdio.h>
int main()
{
int h1,h2,h3;
int m1,m2,m3;
printf("enter the time h1:m1\n");
scanf("%d",&h1);
scanf("%d",&m2);
printf("enter the time h2:m2\n");
scanf("%d",&h2);
scanf("%d",&m2);
h3=h1-h2;
m3=m1-m2;
printf("%d:%d",h3,m3);
return 0;
}
