#include<stdio.h>
int main()
{
     int n=3,i,j,fact,sign= -1;
     float sum=0,x=2,p;
     for(i=0;i<=n;i=i+2)
     {
        p=1;
        fact=1;
        for(j=1;j<=i;j++)
        {
             p*=x;
             fact*=j;
        }
         sign= -1 * sign;
         sum  +=  sign * p / fact;

     }

     printf("\n\n%f",sum);
     return 0;

}
