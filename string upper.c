#include<stdio.h>
int convert(char *str)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            i++;
        }
        else
        {
            str[i]=str[i]-32;
            i++;
        }
    }

}
int main()
{
    char str[100]="hello world";
    convert(str);
    printf("%s",str);
    return 0;
}
