#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n,i;
    printf("\nEnter the no of the elements:");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL)
        printf("\n\nError in file opening");
    else
    {
        for(i=0;i<n;i++)
        {
            printf("\n%d",*(ptr+i));
            ptr[i]=i;
        }
        for(i=0;i<n;i++)
        {
            printf("\n\n\n%d",*(ptr+i));
        }
    }
    free(ptr);
    return 0;
}
