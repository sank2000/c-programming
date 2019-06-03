#include<stdio.h>
int main()
{
 int i,n,data[100][2],k=1;
 float h,bmi[100];
 printf("Emter the number of students:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 printf("***************\n");
  printf("Enter the height of %d\'s student in cm:",k);
  scanf("%d",&data[i][0]);
  printf("Enter the weight of %d\'s student in kg:",k);
  scanf("%d",&data[i][1]);
  k++;
  }
  for(i=0;i<n;i++)
  {
  h=(float)data[i][0]/100;
  bmi[i]=data[i][1]/(h*h);

  }
  printf("##################################################");
  printf("\nstu.no\theight\tweight\tbmi\t\tresult\n");
  k=1;
  for(i=0;i<n;i++)
  {
   printf("\n%-6d\t%-6d\t%-6d\t%-6f\t",k++,data[i][0],data[i][1],bmi[i]);
   if(bmi[i]<15)
      printf("Starvation\n");
   else if(bmi[i]>14 && bmi[i]<18)
      printf("Underweight\n");
   else if(bmi[i]>17 && bmi[i]<26)
      printf("Healthy\n");
   else if(bmi[i]>25 && bmi[i]<31)
      printf("Over Weight\n");
   else if(bmi[i]>30 && bmi[i]<36)
      printf("Obese\n");
   else
      printf("Severe Obese\n");
   }
   return 0;
   }
