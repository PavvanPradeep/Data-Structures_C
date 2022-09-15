#include <stdio.h>   
void display();
int push(int ele);
int pop();
int stack[100],top=-1,n,ele;
int main()
{   
    printf("enter n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ele);
        push(ele);
    }
    display();
    pop();
    display();
}
int push(int ele)
{
    if(top>=n-1)
        printf("overflow");
    else
    {
        top=top+1;
        stack[top]=ele;
    }
}

void display()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
    }
}

int pop()
{

    if(top<=-1)
        printf("underflow");
    else
    { 
        top=top-1;
    }
}