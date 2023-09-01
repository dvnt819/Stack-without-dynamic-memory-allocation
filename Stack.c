#include<stdio.h>
int stack[100],choise=0,top=-1,value,n;
void push()
{
    if(top==n)
    {
        printf("stack is overflow\n");
    }
    else
    {
        printf("enter the value : ");
        scanf("%d",&value);
        top=top+1;
        stack[top]=value;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack is underflow\n");
    }
    else
    {
        top=top-1;
    }
}
void show()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
}
int main()
{
    printf("\nenter the number of element in stack : ");
    scanf("%d",&n);
    n=n-1;

    while(choise !=4)
    {
        printf("choose one of the below option : ");
        printf("\n1.push\n2.pop\n3.show\n4.exit\n");
        printf("enter your choise : ");
        scanf("%d",&choise);

        switch(choise)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                show();
                break;
            }
            case 4:
            {
                printf("exiting...");
            }
            default:
            {
                printf("plz enter valid choise!");
            }
        }
    }
    return 0;
}
