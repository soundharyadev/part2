import java.util.Scanner;
public class Palindrome {
    public static void main(String []s)
    {
        System.out.println("enter the number:");
        Scanner r=new Scanner(System.in);
        int num=r.nextInt();
        int n =num;
        int  rev=0,rmd;
        while(num>0)
        {
            rmd=num%10;
            rev=rev*10+rmd;
            num=num/10;
        }
        if(rev==n){
            
            System.out.println(n+ "yes");
        
        }
        else
        {
            System.out.println(n+ "no");
        }
   
        
    }
}
