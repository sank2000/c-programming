#include<stdio.h>
#include<string.h>
void swap(char *a,char *b);
void reverse(char str[]);
int alpha(char x);
int main()
{
  char str[100];int len;
  printf("Enter the string:");
  gets(str);
  reverse(str);
  printf("The reversed string is %s",str);
  return 0;
 }
void reverse(char str[])
{
   int i=0,r=strlen(str)-1;
   while(i<r)
   {
     if(!alpha(str[i]))
	   i++;
	 else if(!alpha(str[r]))
	   r--;
	 else
	 {
	   swap(&str[i],&str[r]);
	   i++;
	   r--;
	  }
     }
}
int alpha(char x)
{
   return((x>='a' && x<= 'z')||( x>='A' && x<= 'Z'));
  }
 void swap(char *a,char *b)
 {
    char t;
	t=*a;
	*a=*b;
	*b=t;

	}
