#include <stdio.h>
#define SIZE 100 


int main()
{
    char str[SIZE];
    char * s = str;
    int  digits,a;

     digits = 0;
    printf("Enter any string : ");
    gets(str);

    while(*s)
    {
       
   if(*s>='0' && *s<='9')
            digits++;

        s++;
        a=digits;
    }
    printf("%d\n",a);

    return 0;
}
