#include <stdio.h>
#define SIZE 100 


int main()
{
    char str[SIZE];
    char * s = str;
    int alphabets, digits, others,a;

    alphabets = digits = others = 0;
    printf("Enter any string : ");
    gets(str);

    while(*s)
    {
        if((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
            alphabets++;
        else if(*s>='0' && *s<='9')
            digits++;
        else
            others++;

        s++;
        a=others;
    }
    printf("%d\n",a);

    return 0;
}
