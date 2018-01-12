import java.io.*;
import java.util.Scanner;
public  class Armstrong
{
public static void main(String []s)
{
int num,sum,temp;
int i=1,n=0;
Scanner sc= new Scanner(System.in);
System.out.println("enter the number:");
num=sc.nextInt();
sum=0;
i=num;
while(num>0)
{
    n=num %10;
    num= num/10;
    sum=sum+(n*n*n);
}
if(sum==i)
{
    System.out.println("is an Armstrong number:");
    
}
else
{
    System.out.println("is not an armstrong number:");
}
}
}
