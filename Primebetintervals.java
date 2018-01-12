import java.io.*;
public class Prime
{
public static void main(String[]s)
{
int l=1,h=10;
while(l < h)
{
    boolean f=false;
    for(int i=2;i<=l/2;++i)
    {
        if(l%i==0)
        {
            f=true;
            break;
        }
    }
    if(!f)
        System.out.println(l + " ");
    ++l;
}
}
}
