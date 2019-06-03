#include<stdio.h>
int main()
{
    int n,i,pos,num,a[100];
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the number to insert:\n");
    scanf("%d",&num);
    printf("Enter the position:\n");
    scanf("%d",&pos);
    for(i=n;i>=pos;i--)
        a[i+1]=a[i];
    a[pos]=num;
    n++;
    printf("After inserting...\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}

