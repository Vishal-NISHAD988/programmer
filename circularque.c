#include<stdio.h>
#define MAXSIZE 10
int cq[MAXSIZE],front=-1,rear=-1;
void eq();
void dq();
void display();
void main()
{
    int ch;
    do
    {
        printf("\n---------circularqueue------------");
        printf("\n1:Enqueue\n2:Dequeue\n3:Display");
        printf("\nenter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:eq(); break;
            case 2:dq(); break;
            case 3:display(); break;
            case 4:exit(0); break;
            default: printf("\n invalid input");
        }
    } while (ch!=4);
    
}

/// insert a element
void eq()
{
    int n;
    if((rear+1)%MAXSIZE==front)
    printf("\nqueue is over flow");
    else
    {
        printf("\n enter the element:");
        scanf("%d",&n);
        if(front==-1 && rear==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear=(rear+1)%MAXSIZE;  
        }
        cq[rear]=n;
    }
}


//dequeu
void dq()
{
    int n;
    if(front==-1 && rear==-1)
    {
        printf("\n queue is empty");
    }
    else
    {
      n=cq[front];
      printf("\ndeleted item %d",n);
      if(front==rear)
      {
        front=-1;
        rear=-1;
      }
      else
      front=(front+1)%MAXSIZE;
    }
}

//display of circular queue
void display()
{
    if(front==-1 && rear==-1)
    {
        printf("\n queue is empty");
    }
    else
    {
        int i;
        for(i=front;i<=rear;i++)
        {
            printf("%5d",cq[i]);
        }
    }

}