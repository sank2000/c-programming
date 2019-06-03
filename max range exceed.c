#include<stdio.h>
int main()
{
    unsigned int i;int x,
    y,z;
    x=10,y=20,
    z=x+y;
    int count=0;
    for(i=0;i<10;i--)
    {
        printf("%d",i);
        count++;
    }
    printf("\n%u",i);
    printf("\n%d",count);

    return 0;
}
