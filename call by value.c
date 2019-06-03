#include<stdio.h>
int fun(int num)
{
    num=num+5;
    printf("\nThe vaue of num inside fun is %d",num);
}
int main()
{
    int num=10;
    printf("\nThe vaue num before calling fun is %d",num);
    fun(num);
    printf("\nThe vaue num after calling fun is %d",num);
    return 0;
}
