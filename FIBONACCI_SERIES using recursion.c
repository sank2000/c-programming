#include<stdio.h>
void fib(int n,int a,int b)
{
    int c;
    c = a+b;
    printf("%d",c);
    printf("\n");
    a = b;
    b = c;
    if(n>1)
    {
        fib(n-1,a,b);
    }
}
int main()
{
    int n, a = -1,b = 1;
    printf("Enter the limit:");
    scanf("%d",&n);
    fib(n,a,b);
    return 0;
}
