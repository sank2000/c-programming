#include<stdio.h>
#include<string.h>
int main()
{
int a,b,c,d;
printf("Enter the value for a:");
scanf("%d",&a);
printf("Enter the value for b:");
scanf("%d",&b);
printf("Enter the value for c:");
scanf("%d",&c);
d=a+(b*c);
printf("\nThe value of d is:%d",d);
d=a*(b/c);
printf("\nThe value of d is:%d",d);
return 0;
}
