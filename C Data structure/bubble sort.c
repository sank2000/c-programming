#include<stdio.h>
int main()
{
    int arr[20],i,j,no,temp;
    printf("Enter the no of elements:");
    scanf("%d",&no);
    for(i=0;i<no;i++)
    {
      printf("Enter the %d element:",i+1);
      scanf("%d",&arr[i]);
    }
    for(i=0;i<no;i++)
    {
        for(j=0;j < no-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;

            }
        }
     }
    printf("\nAfter sorting.....\n");
    for(i=0;i<no;i++)
        printf("\n%d",arr[i]);
    return 0;
}

