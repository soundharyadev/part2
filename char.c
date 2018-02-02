#include <stdio.h>
int main()
{
     int charcnt=0,commacnt=0,i;
     char str[125];
     printf("Enter a string ");
     scanf("%s",str);     
     for(i=0;str[i]!='\0';i++){
         
      if(str[i]=='')
        commacnt++;
     }
     charcnt=i;
     printf("\n\nTotal Characters : %d",charcnt);   
     printf("\nTotal Commas     : %d",commacnt);
     return 0;
}
