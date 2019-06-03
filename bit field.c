#include<stdio.h>
struct field
{
    int x : 2;
    int y : 2;
    int z : 28;
};
int main()
{
    struct field s1;
    printf("%d",sizeof(s1));
    return 0;

}
