#include<stdio.h>
int main()
{
    int n,large=0,i,a[100];
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>large)
        {
            large = a[i];
        }
    }
    printf("Largest number is :%d",large);
    return 0;
}
