#include<stdio.h>
struct node
{
    int data;
    struct node *add;
};struct node *start=NULL,*temp,*new1;

//to create a link list
void create()
{
    int n;
    char ch,y,Y;
    printf("\n netr the element:");
    scanf("%d",&n);
    start=(struct node*)(malloc(sizeof(struct node)));
    start->data=n;
    start->add=NULL;
    temp=start;

    printf("\n want to continue:");
    ch=getche();

    while(ch==y || ch==Y)
    {
        printf("\n enter the element : ");
        scanf("%d",&n);
        new1=(struct node*)(malloc(sizeof(struct node)));
        new1->data=n;
        new1->add=NULL;
        temp->add=new1;
        temp=temp->add;
        printf("\n want to continue:");
        ch=getche();
    }

}
//main body
void main()
{
    int choice;
    do
    {
        printf("\n..........linklist.............");
        printf("\n1:create\n2:insert at start\n3:insert at mid\n4:insert at last");
        printf("\n5:delete from start\n6:delete from mid\n7:delete from end\n8:display");
        printf("\n emter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:create();break;
            case 2:insertfirst();break;
            case 3:insertmid();break;
            case 4:insertend(); break;
            case 5:deletestart(); break;
            case 6:deletemid(); break;
            case 7:deleteend(); break;
            case 8:display(); break;
            default :printf("invalid input");

        }

    }while(choice != 9);
}