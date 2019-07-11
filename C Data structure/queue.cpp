#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 2 
int front = -1;
int rear = -1;
int a[MAX];
void insert();
void del();
void display();
int main()
{
   int opt,again;
   do
   {
     printf("\n\n\t MENU\n1.Insert\n2.Delete\n3.Display\n4.Exit");
	 printf("\n\nEnter your Option:");
	 scanf("%d",&opt);
	 switch(opt)
	 {
	 case 1:
	     insert();
		 break;
     case 2:
	     del();
		 break;
	case 3:
	     display();
		 break;
	case 4:
	     exit(0);
		 break;
    }
	printf("\nDo you want to continue again(0/1):");
	scanf("%d",&again);
	}while(again==1);
}

void insert()
{
 int x;
 printf("Enter the element you want to insert:");
 scanf("%d",&x);
 if(rear < MAX - 1)
 {
    a[++rear]= x;
	if(front == -1)
	    front = 0;
	printf("Element is successfully inserted");
 }
 else
  printf("\n\t\tQueue is full");
}

void del()
{
   int i;
   if(rear == -1)
     printf("\n\n Queue is Empty ");
   else
   {
     printf("The element deleted is:%d",a[0]);
     for(i=0;i<=rear;i++)
	 {
	    a[i]=a[i+1];
	 }
	
	rear--;
	if(rear == -1)
	   front = -1;
	}
}	 
void display()
{
  int i;
  if(front==-1)
     printf("\n\nQueue is Empty ");
  else
  {
     printf("THe elements are:");
     for(i=front;i<=rear;i++)
	    printf("%d  ",a[i]); 
	   
  }
	
}

