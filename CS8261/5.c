#include<stdio.h>
#include<math.h>
int main()
{
              int num,originalnumber,rem,result=0,n=0;
             printf("Enter a number:");
             scanf("%d",&num);
            originalnumber=num;
             while(originalnumber!=0)
           {
                      originalnumber/=10;
                      ++n;
                }
             originalnumber=num;
            while(originalnumber!=0)
       {
                      rem=originalnumber%10;
                     result+=pow(rem,n);
                     originalnumber/=10;
        }

	printf("%d",result);
                if(result==num)
                       printf("\n%d is an armstrong number",num);
                 else
                      printf("\n%d is not an armstrong number",num);
                return 0;
}
