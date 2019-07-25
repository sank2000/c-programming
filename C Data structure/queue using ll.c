#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear=NULL;
void create_qll(struct node **,struct node **);
void display(struct node *);
void enqueue(struct node **);
void dequeue(struct node **);
int main()
{
    int option;
	while(1)
	{
		printf("\n MAIN MENU");
		printf("\n1.CREATE\n2.ENQUEUE\n3.DEQUEUE\n4.DISPLAY\n5.EXIT");
		printf("\n Enter your option:");
		scanf("%d",&option);
		switch(option)
		{
				case 1:create_qll(&front,&rear);break;
				case 2:enqueue(&rear);break;
				case 3:dequeue(&front);break;
				case 4:display(front);break;
				case 5:exit(0);break;
				default:printf("\n enter the correct option");
		}
	}
}
void create_qll(struct node **front,struct node **rear)
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
        new_node->next=NULL;
        if(*front==NULL)
        {
            *front=new_node;
            *rear=new_node;
        }
        else
        {
            (*rear)->next=new_node;
			*rear=new_node;
        }
    }

}
void display(struct node *front)
{
    struct node *ptr;
    ptr=front;
    if(ptr==NULL)
        printf("\nQUEUE IS EMPTY\n");
    else
    {
        while(ptr != NULL)
        {
            printf("\t%d",ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
    }

}
void enqueue(struct node **rear)
{
    struct node *new_node;
    int num;
    if(*rear==NULL)
    {
        printf("\nOOPS !!!!!  First you need to create an queue\n");
        return;
    }
    new_node=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the element to Enqueue:");
    scanf("%d",&num);
    new_node->next=NULL;
    new_node->data=num;
    (*rear)->next=new_node;
    (*rear)=new_node;

}
void dequeue(struct node **front)
{
    struct node *ptr;
    ptr=*front;
    if((*front)==NULL)
    {
        printf("\n QUEUE is Empty  \n");
        return;
    }
    else
    {
        printf("\nThe Dequeued element is %d\n",((*front)->data));
        (*front)=(*front)->next;
        free(ptr);

    }
}
