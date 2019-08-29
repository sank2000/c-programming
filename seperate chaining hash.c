#include <stdio.h>
#include <stdlib.h>
#define VAL 10
struct node
{
    int data;
    struct node *next;
};
struct node *table[VAL]={NULL};
void hash(int x)
{
    int mod;
	struct node *ptr,*temp = (struct node *)malloc(sizeof(struct node));
	temp->data = x;
	temp ->next =NULL;
	mod = x % VAL;
	if(table[mod] == NULL)
	    table[mod] = temp;
	else
	{
	   ptr = table[mod];
	   while(ptr->next != NULL)
	   {
	       ptr=ptr->next;
	   }
	   ptr->next = temp;
	   
	}
	
	
}
void display()
{
   struct node *ptr;
   int i;
   for(i=0;i<VAL;i++)
   {
       if(table[i] != NULL)
	   {
	      printf("\nThe elements at index %d :",i);
		  ptr = table[i];
		  while(ptr != NULL)
		  {
		      printf("\t%d",ptr->data);
			  ptr = ptr->next;
		  }
		   
	   }
   }
    
}
int main()
{
   int i,a[]={22,32,42,52,33,43,4,10,0};
   for(i=0;i<9;i++)
	   hash(a[i]);
	display();
}

