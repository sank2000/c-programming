#include<stdio.h>
void num()
{
    int num1,num2,num3;
    printf("Enter the frst num:");
    scanf("%d",&num1);
    printf("Enter the secd num:");
    scanf("%d",&num2);
    printf("Enter the thrd num:");
    scanf("%d",&num3);
    if((num1>num2)&&(num1>num3))
        printf("The First number is greater");
    else if((num2>num1)&&(num2>num3))
        printf("The Second number is greater");
    else
        printf("The Third number is greater");
}
int main()
{
    num();
    return 0;
}
