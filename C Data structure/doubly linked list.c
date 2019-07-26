#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *start = NULL;
void create_ll();
void display();
void insert_beg();
void insert_end();
void insert();
void delete_beg();
void delete_end();
void delete_node();
int main()
{
   int option;
    while(1)
    {
        printf("\n\n *****MAIN MENU *****");
        printf("\n 1: Create a list");
        printf("\n 2: Display the list");
        printf("\n 3: Add a node at the beginning");
        printf("\n 4: Add a node at the end");
        printf("\n 5: Add a node after a given node");
        printf("\n 6: Delete a node from the beginning");
        printf("\n 7: Delete a node from the end");
        printf("\n 8: Delete a given node");
        printf("\n 9: EXIT");
        printf("\n\n Enter your option :");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                create_ll();
                printf("\nDOUBLY LINKED LIST CREATED");
                break;
            case 2:
                display();
                break;
            case 3:
                insert_beg();
                break;
            case 4:
                insert_end();
                break;
            case 5:
                insert();
                break;
            case 6:
                delete_beg();
                break;
            case 7:
                delete_end();
                break;
            case 8:
                delete_node();
                break;
            case 9:
                exit(0);
                break;
            default:
                printf("Select correct option");
        }
    }
    getch();
    return 0;
}
void create_ll()
{
    struct node *new_node,*ptr;
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
        ptr=start;
        if(ptr==NULL)
            start=new_node;
        else
        {
            while(ptr -> next != NULL)
            {
                ptr=ptr->next;
            }
            new_node->prev=ptr;
            ptr->next=new_node;
        }
    }
}
void display()
{
    struct node *ptr;
    ptr=start;
    if(ptr == NULL)
    {
       printf("\nList is empty!\n");
    }
    else
    {
        while(ptr != NULL)
        {
            printf("\n%d",ptr->data);
            ptr=ptr->next;
        }
    }
}
void insert_beg()
{
    struct node *new_node;
    int num;
    printf("\n Enter the data : ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = num;
    new_node->prev=NULL;
    new_node -> next = start;
    start ->prev=new_node;
    start=new_node;
    printf("\nNODE Inserted Successfully\n");
}
void insert_end()
{
    struct node *ptr, *new_node;
    int num;
    printf("\n Enter the data : ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = num;
    new_node -> next = NULL;
    ptr=start;
    while(ptr->next != NULL)
        ptr=ptr->next;
    new_node->prev=ptr;
    ptr->next=new_node;
    printf("\nNODE Inserted Successfully\n");
}
void insert()
{
    struct node *new_node, *ptr, *preptr;
    int num, val;
    printf("\n Enter the data : ");
    scanf("%d", &num);
    printf("\n Enter the value after which the data has to be inserted : ");
    scanf("%d", &val);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = num;
    ptr = start;
    preptr = ptr;
    if(preptr->data==val)
    {
        ptr=ptr->next;
        preptr -> next=new_node;
        new_node -> next = ptr;
    }
    else
    {
        while(preptr -> data != val)
        {
            preptr = ptr;
             if(preptr==NULL)
            {
                printf("\nElement not found!\n");
                return;
            }
            ptr = ptr -> next;
        }
        preptr -> next=new_node;
        new_node -> next = ptr;
    }
    printf("\nNODE Inserted Successfully\n");
    return;
}
void delete_beg()
{
    struct node *ptr;
    ptr = start;
    if(ptr==NULL)
    {
        printf("\nLIST IS EMPTY!\n");
        return;
    }
    printf("\nThe deleted element is :%d",ptr->data);
    ptr=start;
    start=start->next;
    if(start != NULL)
    start->prev=NULL;
    free(ptr);
    return;
}
void delete_end()
{
    struct node *ptr, *preptr;
    ptr = start;
    if(ptr==NULL)
    {
        printf("\nLIST IS EMPTY!\n");
        return;
    }
    if(ptr->next==NULL)
    {
        printf("\nThe deleted element is :%d",ptr->data);
        free(ptr);
        start=NULL;
        return;
    }
    else
   {
     while(ptr -> next != NULL)
     {
        preptr = ptr;
        ptr = ptr -> next;
     }
     preptr -> next = NULL;
     printf("\nThe deleted element is :%d",ptr->data);
     free(ptr);
     return;
  }
}
void delete_node()
{
    struct node *ptr, *preptr;
    int val;
    ptr = start;
    if(ptr==NULL)
    {
        printf("\nLIST IS EMPTY!\n");
        return;
    }
    printf("\n Enter the value of the node which has to be deleted : ");
    scanf("%d", &val);
    if(ptr -> data == val)
    {
        delete_beg();
        return;
    }
    else
    {
        while(ptr -> data != val)
        {
            preptr = ptr;
            ptr = ptr -> next;
            if(ptr==NULL)
            {
                printf("\n The node is not found!!\n");
                return;
            }
        }
        preptr -> next = ptr -> next;
        free(ptr);
        return;
    }
}

