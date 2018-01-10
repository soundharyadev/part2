import java.io.*;
import java.util.Scanner;


class Prime
{
	public static void main (String[] s) 
	{
	int i;
	int j=2;
	int ch=0;
	Scanner sc=new Scanner (System.in);
	System.out.println("Enter the number");
	i=sc.nextInt();
	while(j<=i/2)
	{
		if(i%j==0)
		{
		System.out.println("is not prime number");
			ch=1;
			break;
		}
		else
		{
			System.out.println("it is prime number");
			i++;
			ch=0;
			
		}
	}
	}
}
