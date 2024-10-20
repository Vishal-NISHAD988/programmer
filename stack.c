#include<stdio.h>
#define MAX 10
int stack[MAX],top=-1;
void push()
{
    int x;
    printf("enter data:");
    scanf("%d",&x);
    if(top==MAX-1)
    {
        printf("stack is overflow");

    }
    else
    {
        top++;
        stack[top]=x;
    }
}

void pop()
{
    int item;
    if(top==-1)
    {
        printf("stack is overflow");
    }
    else
    {
        item=stack[top];
        top--;
        printf("item deleted");
    }
}
void display()
{
    int i;
    
    {
        for(i=top;i>=0;i--)
        {
            printf("\n%d",stack[i]);
        }
    }
}



void main()
{
    int choice;
    do
    {
        printf("\n..........stack..............");
        printf("\n enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
          case 1:push(); break;
          case 2:pop(); break;
          case 3:display(); break;
          default:printf("invalid inoput");
        }
        /* code */
    } while (choice!=4);
    
}