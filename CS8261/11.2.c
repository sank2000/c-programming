#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[80];
    printf("Enter your string:");
    gets(str);
    int i=0;
    str[0]=toupper(str[0]);
    while(str[i]!='\0')
    {
        if(str[i]=='!'||str[i]=='?'||str[i]=='.')
        {
            i++;
           if(str[i]==' ')
           {
               i++;
               str[i]=toupper(str[i]);
           }
           else
            str[i]=toupper(str[i]);

        }
        i++;
    }
    printf("\n\n\nCaptilized string:");
        puts(str);
    return 0;
}
