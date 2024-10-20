#include<stdio.h>
# define MAX 3
int que[MAX], front=0,rear=-1;

//inert element
 void eq()
 {
    int x;
    if(rear==MAX-1)
    {
        printf("\nqueue is over flow.");
    }
    else
    {
        printf("\nenter the element:");
        scanf("%d",&x);
        rear++;
        que[rear]=x;

    }
 }

//delete element
 void dq()
 {
    int item;
    if(front>rear)
    {
        printf("queue is Empty");
    }
    else
    {
        item=que[front];
        front++;
        printf("\n deleted element is.%d",item);
    }
 }

//display element
 void display()
 {
    int i;
    if(front>rear)
    {
        printf("\n queue is Empty");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%5d",que[i]);
        }
        
    }
 }


//main body
void main()
{
    int ch;
    do
    {
        printf("\n---------queue------------");
        printf("\n1:Enqueue\n2:Dequeue\n3:Display");
        printf("\nenter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:eq(); break;
            case 2:dq(); break;
            case 3:display(); break;
            default: printf("\n invalid input");
        }
    } while (ch!=4);
    
}