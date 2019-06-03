#include<stdio.h>
int main()
{
    char state[]="GOOD MORNING";
    char *ptr;
    ptr=state;
    while((*ptr)!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}
