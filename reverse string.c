#include<stdio.h>
void revrse(char *str)
{
    if(*str)
    {
        revrse(str+1);
        printf("%c",*str);
    }

}
int main()
{
    char a[100];
    printf("Enter your string:");
    gets(a);
    printf("\n\n\nThe reversed string is:");
    revrse(a);
    return 0;
}
