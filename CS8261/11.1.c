#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[80];
    printf("Enter your string:");
    gets(str);
    int i=0,word=1;
    while(str[i]!='\0')
    {
        if(str[i]==' '||str[i]=='.')
        {
            word++;
        }
        i++;
    }
    printf("The number of words:%d",word);
    return 0;
}
