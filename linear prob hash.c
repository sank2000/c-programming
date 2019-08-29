#include<stdio.h>
#define MAX 5
int arr[5]={0};
void hash(int num)
{   
    int check = 1;
    int mod = num % MAX;
	if(arr[mod] == 0)
	    arr[mod] = num;
	else
	{
	     while(check)
		 {
		   if(mod == MAX - 1)
		   {
		        mod = -1;
		   }
		   mod++;
		   if(arr[mod]==0)
		   {
		      arr[mod]= num;
			  check = 0;
		   }
		 }  
	}
    
}
void display()
{
   int i;
   for(i=0;i<MAX;i++)
      printf("\nThe element at index %d is %d",i,arr[i]);
}
int main()
{
    int i,a[]={22,32,42,52,4};
	printf("\n\tLinear hash\n");
    for(i=0;i<5;i++)
	   hash(a[i]);
	display();

}

