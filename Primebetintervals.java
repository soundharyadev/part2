import java.io.*;
import java.util.Scanner;
public class Prime
{
public static void main(String[]s)
{
int low=20,high=50;
while(low < high)
{
if(checkPrimeNumber(low))
System.out.println(low+ " ");
++low;
}
}
public static boolean checkPrimeNumber(int num)
{
boolean flag=true;
for(int i=2;i<=num/2;++i)
{
if(num % i == 0)
{
flag =false;
break;
]
}
return flag;
}
}
