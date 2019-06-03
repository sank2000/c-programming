#include<stdio.h>
int main()
{
    char arr1[]={'a','d','g','h'};
    char arr2[]={'a','q','g','r'};
    char *ptr1,*ptr2;int occur=0;
    ptr1=arr1;
    ptr2=arr2;
    while(((*ptr1)!='\0')&&((*ptr2)!='\0'))
    {
        if((*ptr1)==(*ptr2))
        {
            printf("\nThe element %c occured in both array at same position",*ptr1);
            occur=1;
        }
        ptr1++;
        ptr2++;
    }
    if(occur==0)
    {
        printf("*****NO elements matched*******");
    }
    return 0;
}
