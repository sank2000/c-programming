#include<stdio.h>
#include<string.h>
int main()
{
      char str1[4]="A";
      char str2[4]="a";
      int n;
      n=strcmp(str1,str2);
      printf("%d",n);
      return 0;
}
