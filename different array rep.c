#include<stdio.h>
int main()
{
    int a[2][2]={{1,2},{3,4}};
    int a2[2]={1,2};
    printf("%d",*((int*)a+1*2+0));   //*((ptr*)a+i*no.of rows+j)
    printf("\n%d",*((int*)a2+1));

    return 0;
}
