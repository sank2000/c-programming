#include<stdio.h>
int main()
{
   FILE *fp;
   char str1[45],str[]="i am santhosh.ya this is working";
   fp=fopen("1.txt","w+");
   fprintf(fp,"%s",str);
   fseek(fp,0,SEEK_SET);                        //fseek(fileptr,off set,where)
   fgets(str1,10,fp);                          //  fgets(variable,no of char,file pointer)
   puts(str1);

   fclose(fp);
   return 0;
}
