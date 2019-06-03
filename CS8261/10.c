#include<stdio.h>
#include<stdlib.h>
int convert(int num,int base)
{
    int rem;
	rem=num%base;
	if(num==0)
	 return 0;
	convert(num/base,base);
	if(rem<10)
	  printf("%d",rem);
	else
	  printf("%c",rem-10+'a');
}
int main()
{
  int num,opt;
  while(1)
  {
  printf("Enter the number:");
  scanf("%d",&num);
   printf("\n\n\n1.Binary\n2.octal\n3.hexadecimal\n4.exit");
   printf("\nEnter your choice:");
   scanf("%d",&opt);
    switch(opt)
	{
	case 1:
     {
	  printf("\nThe Binary rep of num:");
	  convert(num,2);
	  break;
	 }
	case 2:
    {
	  printf("\nThe Octal rep of num:");
	  convert(num,8);
	  break;
	}
	case 3:
	{
	  printf("\nThe hexa rep of num:");
	  convert(num,16);
	  break;
	}
	case 4:
	{
	  exit(1);
	  break;
	 }
	default:
	printf("\nEnter the crt option:");

	}
  }

  return 0;
 }
