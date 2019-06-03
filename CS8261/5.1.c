#include<stdio.h>
#include<math.h>
int main()
{
    int num,rem,sum=0,temp;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        temp/=10;
        sum+=(rem*rem*rem);
    }
    if(sum==num)
             printf("\n%d is armstrong number",num);
    else
             printf("\n%d is not an armstrong number",num);
    return 0;
}
