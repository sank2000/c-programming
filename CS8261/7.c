#include<stdio.h>
int main()
{
 int num,i,height[100],sum=0,k=1,count=0;
 float avg;
 printf("Enter the number of students:");
 scanf("%d",&num);
 for(i=0;i<num;i++)
 {
    printf("Enter the %d\'s students height in cm:",k++);
	scanf("%d",&height[i]);
	sum+=height[i];
 }
 avg=(float)sum/num;
 printf("The average height is:  %f",avg);
 for(i=0;i<num;i++)
 if(avg<height[i])
  count+=1;
 printf("\nThe no.of students above avg height is %d",count);
 return 0;
 }
