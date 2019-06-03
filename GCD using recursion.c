#include<stdio.h>
int gcd(int a,int b)
{
    if(a==0)
        return b;
    else if(b==0)
        return a;
    else
        gcd(b,a%b);
}
int main()
{
    int a,b;
    printf("Enter the two numbers:\n");
    scanf("%d %d",&a,&b);
    printf("Result is:%d",gcd(a,b));
    return 0;
}
