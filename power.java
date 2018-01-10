import java.io.*;
import java.util.Scanner;


class Power
{
	public static void main (String[] s) 
	{
	int pow,num;
	int i=1,sum=1;
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter the number");
	 num=sc.nextInt();
	System.out.println("Enter the power");
	 pow =sc.nextInt();
	while(i<=pow)
	{
		sum=i*num;
		i++;
	}
	System.out.println(+sum);
	
	}
}
