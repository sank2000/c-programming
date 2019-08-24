#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int arr[MAX];
int top=-1;
void create()
{
    int num,i;
    printf("\nEnter the no of elements : ");
    scanf("%d",&num);
    if(num >MAX )
        printf("\nSTACK Size exceed !!!!\n");
    else
    {
        for(i=0;i<num;i++)
        {
          printf("\nEnter the %d element :",i+1);
          scanf("%d",&arr[i]);
        }
        top = num-1;
        printf("\nSuccessfully Created STACK!!\n");
    }
}
void push()
{
    int x;
    if(top < MAX-1)
    {
        printf("\nEnter the element to push:");
        scanf("%d",&x);
        top++;
        arr[top]=x;
        printf("\nPushed successfully\n");
    }
    else
       printf("\nStack Overflow\n");

}
void pop()
{
    if(top<0)
        printf("\nStack Underflow\n");
    else
       printf("\nThe popped element is %d",arr[top--]);
}
void display()
{
    int i;
    if(top < 0)
      printf("\nStack is Empty!!\n");
    else
    {
        printf("\nThe Elements are:");
        for(i=top;i>=0;i--)
            printf("%d\t",arr[i]);
    }
}


int main()
{
    int ch;
    while(1){
    printf("\n--------------STACK ADT----------------\n");
    printf("\n\n1.CREATE\n2.PUSH\n3.POP\n4.DISPLAY\n5.Exit\n");
    printf("\n\nEnter your option:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:create();
               break;
       case 2:push();
              break;
       case 3:pop();
              break;
       case 4:display();
              break;
       case 5:
              exit(0);break;
       default:printf("OOPS Something went wrong!!!");
    }
    }
    return 0;
}
