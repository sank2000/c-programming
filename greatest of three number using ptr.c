#include<stdio.h>
int main()
{
    int num1,num2,num3;
    int *ptr1,*ptr2,*ptr3;
    printf("Enter the frst num:");
    scanf("%d",&num1);
    ptr1=&num1;
    printf("Enter the secd num:");
    scanf("%d",&num2);
    ptr2=&num2;
    printf("Enter the thrd num:");
    scanf("%d",&num3);
    ptr3=&num3;
    if(((*ptr1)>(*ptr2))&&((*ptr1)>(*ptr3)))
        printf("The first number is greater");
    else if(((*ptr2)>(*ptr1))&&((*ptr2)>(*ptr3)))
        printf("The Second number is greater");
    else
        printf("The Third number is greater");

    return 0;
}
