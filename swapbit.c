#include<stdio.h>
void swap(int a,int b);
void main()
{
int a,b;
clrscr();
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
printf("Before swapping the values will be %d %d",a,b);
swap(a,b);
}
void swap(int x, int y)
{
int temp;
temp=x;
y=x^y;
x=x^y;
y=temp;
printf("After swapping the values will be %d %d",x,y);
getch();
}
