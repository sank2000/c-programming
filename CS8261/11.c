#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char str[80];
    char s[4] = " .";
    char *token;
    int i=0;
    printf("Enter the string:");
    gets(str);
    token = strtok(str,s);
while  (token != NULL)
{
    i++;
    token = strtok(NULL,s);
}
printf("\nThe total number of words:%d",i);
return 0;
}
