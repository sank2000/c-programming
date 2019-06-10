#include<stdio.h>
struct point
{
   int x;
   int y;

};
struct point origin,*pp;
int main()
{
  pp=&origin;
  printf("origin is(%d , %d)\n",(*pp).x,pp->y);
  return 0;
}
