#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *ptr;
    int n;
    printf("\nEnter the length of the strig:");
    scanf("%d",&n);
    ptr=(char*)malloc(n*sizeof(char));
    if(ptr==NULL)
        printf("\n\nError in file opening");
    else
    {
        fflush(stdin);
        printf("\nEnter the string:");
        gets(ptr);
        printf("\n\n\n Your string is:%s",ptr);

    }
    free(ptr);
    return 0;
}
