#include<stdio.h>
int main()
{
    int a=1;
    int *p;
    p = &a;
    printf("%d\n",a);
    printf("%u\n",&a);
    printf("%u\n",p);
    printf("%d\n",* p);
    *p = 45;
    printf("%d\n",a);
    return 0;
}
