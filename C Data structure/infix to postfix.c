#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 20
int top = -1;
char stack[MAX];
char pop();
void push(char item);
int prior(char symbol)
{
    switch(symbol)
    {
        case '+':
        case '-':
          return 2;
          break;
        case '*':
        case '/':
          return 4;
          break;
        default:
          return 1;
        break;
   }
}
int isoperator(char symbol)
{
    switch(symbol)
    {
        case '+':
        case '-':
        case '*':
        case '/':
        case '(':
        case ')':
            return 1;
            break;
        default:
            return 0;
    }
}
void convert(char infix[],char postfix[])
{
    int i,symbol,j = 0;
    stack[++top] = '#';
    for(i=0;i<strlen(infix);i++)
    {
        symbol = infix[i];
        if(isoperator(symbol) == 0)
        {
          postfix[j++] = symbol;
        }
        else
        {
            if(symbol == '(')
              push(symbol);
            else if(symbol == ')')
            {
                while(stack[top] != '(')
                {
                    postfix[j++] = pop();
                }
                pop();
            }
            else
            {
               if(prior(symbol) > prior(stack[top]))
                 push(symbol);
               else
               {
                while(prior(symbol) <= prior(stack[top]))
                {
                  postfix[j++] = pop();
                }
                  push(symbol);
                }
            }
      }
    }
   while(stack[top] != '#')
   {
    postfix[j++] = pop();
   }
    postfix[j] = '\0';
}
int main()
{
    char infix[20],postfix[20];
    printf("Enter the infix Expression: ");
    scanf("%s",infix);
    convert(infix, postfix);
    printf("\nThe corresponding postfix string is: %s",postfix);
    return 0;
}
void push(char item)
{
    top++;
    stack[top] = item;
}
char pop()
{
    char a;
    a = stack[top];
    top--;
    return a;
}
