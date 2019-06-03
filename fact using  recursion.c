#include<stdio.h>
int fact(int num)
{
    if(num==0)
        return 1;
    else
        return(num*fact(num-1));
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("\nThe factorial is %d",fact(n));
    return 0;
}
