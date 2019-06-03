#include<stdio.h>
int n=6;
int fun(int n)
{
    if(n==0)
    return 0;
    n--;
    fun(n);
    printf("%d",n);
}
int main()
{
    fun(n);
    return 0;

}
