#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char str[80];
    char rsltStr[128]="";
    char s[3] = " ";
    char *token;
    char sch[15];
    char rpl[15];
    int i=0;
    printf("Enter the string:");
    gets(str);
    printf("\nEnter the word to search:");
    gets(sch);
    printf("\nEnter the word to replace:");
    gets(rpl);

    token = strtok(str,s);
while  (token != NULL)
{
    if (strcmp (token,sch)==0)
{
    char newtok[32];
    strcpy (newtok,rpl);
    strcat (rsltStr, newtok);
    strcat (rsltStr, " ");
    i=1;
 }

	else
  {
     strcat (rsltStr, token);
     strcat (rsltStr, " ");
   }
    token = strtok(NULL,s);
}
if(i==0)
{
    printf("\nSearch not found\n");
}
printf("\nThe resultant string is:");
puts(rsltStr);
return 0;
}
