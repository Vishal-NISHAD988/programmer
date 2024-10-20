#include<stdio.h>
int push(int i);
int pop(int i);
#define MAX 10
int stack[MAX];
int top=-1;
 int main()
 {
    int i,n=5;
    for(i=1;i<=n;i++)
    {
        push(i);
    }
    
    for(i=1;i<=n;i++)
    {
        printf("%5d",pop(i));
    }
    return 0;
 }

 int push(int i)
 {
    if(top==MAX-1)
    {
        printf("stack is over flow");
    }
    else
    {
        stack[++top]=i;
    }
 }

 int pop(int i)
 {
    int j;
    if(top==-1)
    {
        printf("stack is under flow");
    }
    else
    {
        j=stack[top--];
        return j;
    }
 }
 