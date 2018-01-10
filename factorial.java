import java.io.*;
import java.util.Scanner;
public class Fact
{
public static void main(String[]s)
{
int i, fact=1;
int n;
Scanner sc= new Scanner(System.in);
System.out.println("Enter the number:");
n=sc.nextInt();
if(n<0)
{
  System.ouot,println("-ve number");
}
  else
{
for(i=0;i<n;i++)
{
fact=fact*i;
System.out.println("the factorial of number is:" +fact);
}
}
}
}
