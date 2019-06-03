#include<stdio.h>
void pat();
void sym();
int main()
{
    pat();
    sym();
    pat();
    return 0;

}
void pat()
{
    int i,j;
    for(i=0;i<1;i++)
    {
        for(j=0;j<8;j++)
     {
        printf("*");
     }
    printf("\n");
    }
}
void sym()
{
    int i,j;
        for(i=0;i<4;i++)
    {
        for(j=0;j<8;j++)
     {
        if(j==0 || j==7)
        printf("&");
        else
            printf(" ");
     }
    printf("\n");
    }
}
