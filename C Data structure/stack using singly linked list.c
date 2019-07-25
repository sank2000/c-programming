#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct node *top=NULL;
struct node *push(struct node *);
struct node *display(struct node *);
struct node *pop(struct node *);
struct node *create(struct node *);
int main()
{
    int option;
	while(1)
	{
		printf("\n MAIN MENU");
		printf("\n1.CREATE\n2.PUSH\n3.POP\n4.DISPLAY\n5.EXIT");
		printf("\n Enter your option:");
		scanf("%d",&option);
		switch(option)
		{
				case 1:top=create(top);break;
				case 2:top=push(top);break;
				case 3:top=pop(top);break;
				case 4:top=display(top);break;
				case 5:exit(0);break;
				default:printf("\n enter the correct option");
		}
	}
}
struct node *create(struct node *top)
{
        struct node *new_node;
        int num,i,no;
		printf("\nEnter the number of  elements:");
		scanf("%d",&no);
		for(i=1;i<=no;i++)
		{
		   	new_node=(struct node *)malloc(sizeof(struct node));
			printf("\nEnter the %d element:",i);
			scanf("%d",&num);
		    new_node->data=num;
		    if(top==NULL)
		    {
			   new_node->next=NULL;
			   top=new_node;
		    }
			else
			{
				new_node->next=top;
				top=new_node;
				
			}
		}
		return top;
		
}

struct node *push(struct node *top)
{
	struct node *ptr,*new_node;
	int num;
	printf("\n enter the value of data:");
	scanf("%d",&num);
	new_node=(struct node *)malloc(sizeof(struct node));
		new_node->data=num;
		if(top==NULL)
		{
			new_node->next=NULL;
			top=new_node;
		}
		else
		{
			new_node->next=top;
			top=new_node;
			
		}
		printf("\nElement is pushed successfully\n");
	return top;
}
struct node *display(struct node *top)
{
	struct node *ptr;
	ptr=top;
	if(top==NULL)
		printf("\n the stack is empty");
	else
	{
		while(ptr!=NULL)
		{
			printf("\t %d",ptr->data);
			ptr=ptr->next;
		}
	}
	return top;
}

struct node *pop(struct node *top)
{
	struct node * ptr,*preptr;
	ptr=top;
	if(top==NULL)
		printf("\n the stack is empty");
	else
	{
		printf("\n The popped element is %d",ptr->data);
		top=ptr->next;
		free(ptr);
	}
		
	return top;
}
	
	
	

