#include<stdio.h>
int enqueue(int ele);
void display();
int dequeue();
int queue[100],f=0,r=-1,n,ele;
int main()
{   
    printf("enter n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ele);
        enqueue(ele);
    }
    display();
    dequeue();
    display();
}

int enqueue(int ele)
{
    if(r>n)
        printf("overflow");
    else
    {
        r=r+1;
        queue[r]=ele;
    }
}

int dequeue()
{
    if(r==-1)
        printf("underflow");
    else{
        f=f+1;
    }
        
}
void display()
{
    for(int i=f;i<=r;i++)
    {
        printf("%d",queue[i]);
    }
}