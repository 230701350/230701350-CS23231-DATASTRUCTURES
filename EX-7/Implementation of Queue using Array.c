NAME: Sudharshan Krishnaa L K 
REGISTER NO.:230701350

EX-7: Implementation of Queue using Array


#include<stdio.h>
#include<stdlib.h>
#define size 5
int que[size];
void Enqueue(int);
void Dqueue();
void Display();
int IsFull();
int IsEmpty();
int F=-1,R=-1;
int IsFull()
{
    if (size-1==R)
    {
        return 1;
    }
    else
    return 0;
}
int IsEmpty()
{
    if(F==-1)
    return 1;
    else
    return 0;
}
void Enqueue(int data)
{
    if(IsFull())
    {
        printf("overflow");
    }
    else if(F==-1)
    {
        F=0;
    }
    R=R+1;
    que[R]=data;
}

void Dqueue()
{
    if(IsEmpty())
    {
        printf("underflow");
    }
    else
    {
       printf("Deleted Element is:%d",que[F]);
       if (R==F)
          R=F=-1;
       else
          F=F+1;
    }
}
void Display()
{
    if(IsEmpty())
    {
        printf("No elements in queue");
    }
    else
    {
        for(int i=F;i<=R;i++)
        {
            printf("%d\n",que[i]);
        }
    }
}
int main()
{
    int choice,t=1,val;
    while (t==1)
    {
        printf("\n\n\nMENU\n");
        printf("1.Insert an element\n2.Delete an element\n3.Display the Queue\n4.EXIT\n");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
            printf("Enter the value to be inserted:");
            scanf("%d",&val);
            Enqueue(val);
            break;
            case 2:
            Dqueue();
            break;
            case 3:
            Display();
            break;
            case 4:
            t=0;
           
        }
    }
}
