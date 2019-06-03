#include<stdio.h>
int main()
{
    int strt,ends,i;
    int *fptr,*eptr;
    printf("Enter the start and end range:");
    scanf("%d%d",&strt,&ends);
    fptr=&strt;
    eptr=&ends;
    printf("The ODD number from %d to %d \n",*fptr,*eptr);
    for(i=(*fptr);i<(*eptr);i++)
    {
        if(i%2 != 0)
        {
          printf("%d\n",i);
        }
    }
    return 0;
}
