#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter the number:");
    scanf("%d",&n);

        fact=1;
    for(i=n;i>=1;i--)
    {
        fact=fact * i;
    }
    printf("\nThe factorial is %d",fact);
    return 0;
}
