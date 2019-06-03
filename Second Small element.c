#include<stdio.h>
int main()
{
    int n,large=0,i,a[100],s=0;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>large){
            large = a[i];
        }
        if(a[i]>s && a[i]!=large){
            s = a[i];
        }
    }
    printf("SECOND SMAllest number is :%d",s);
    return 0;
}
