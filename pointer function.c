#include<stdio.h>
void sum(int,int);
int main()
{
    void (*ptr)(int,int);
    ptr=&sum;
    sum(10,20);
    (*ptr)(15,20);
    ptr(30,15);
    return 0;
}
void sum(int x,int y)
{
    printf("\nSum of the two number is:%d",x+y);
}
