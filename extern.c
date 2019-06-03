#include<stdio.h>

int main()
{
    extern int y;
    extern void fun();
    printf("%d\n",y);
    fun();
    return 0;
}
int y;
void fun()
{
    static int i=2;
    extern int y;
    printf("%d\n",y);
    i--;
    if(i==1)
    {
        fun();
    }


}
