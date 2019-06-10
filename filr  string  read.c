/*
   No of words,sentence,special character,spaces,character
  */
#include<stdio.h>
int main()
{
   FILE *fp;int i;
   char ch;
   int word=1,chartr=1,spchar=0,sen=1,space=0;
   fp=fopen("1.txt","r");
   ch=getc(fp);
   while(ch!=EOF)
   {
   putchar(ch);
   chartr++;
   ch=getc(fp);
   if(ch=='.'||ch=='!'||ch=='?')
           spchar++;
   if(ch==' '||ch=='.')
          word++;
   if(ch==' ')
        space++;
   if(ch=='.')
        sen++;
   }
   printf("\n%d",word);
   printf("\n%d",chartr);
   printf("\n%d",spchar);
   printf("\n%d",space);
   printf("\n%d",sen);
   fclose(fp);
   return 0;
}
