#include<stdio.h>
int main()
{
    char c,name[15];
    int a;
    float b;
    /*use of getchar and putchar*/
printf("\nEnter a character:");
c=getchar();
putchar(c);
/*use of printf and scanf*/
printf("\n\n\nEnter your name:");
scanf("%s",name);
printf("%s",name);
/*usage of format specifier in printf and scanf*/
printf("\n\n\nEnter a integer and a float value:");
scanf("%d%f",&a,&b);
printf("\n%f    %d",b,a);
return 0;
}
