#include<stdio.h>
int main()
{
int a,b,c,num;
printf("\nEnter the first and second number:");
scanf("%d %d",&a,&b);
printf("***********Select any one of the option*************");
printf("\n1.Addition\n");
printf("2.Subtraction\n");
printf("3.Multiplication\n");
printf("4.Division\n");
printf("5.Modulus\n");
printf("6.Squaring\n");
printf("Enter your option:");
scanf("%d",&num);
switch(num)
{
case 1:c=a+b;
   printf("Sum of two numbers is %d",c);
   break;
case 2:c=a-b;
   printf("Sub of two numbers is %d",c);
   break;
case 3:c=a*b;
   printf("Multiplication of two numbers is %d",c);
   break;
case 4:c=a/b;
   printf("Division of two numbers is %d",c);
   break;
case 5:c=a%b;
   printf("Modulus of two numbers is %d",c);
   break;
case 6:c=a*a;
   printf("Square of first number is %d",c);
       c=b*b;
   printf("Square of second number is %d",c);
   break;
default:printf("TRY AGAIN");
}
return 0;
}
