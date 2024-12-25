#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void push();
void pop();
void traverse();
int Array[5];
int top = -1;
int main()
{
    int choice;
    char ch;
    do
    {
        printf("Enter 1 to push\n");
        printf("Enter 2 to pop\n");
        printf("Enter 3 to traverse\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            traverse();
            break;
        default:
            printf("You entered a wrong choice.\n");
        }
        printf("Do you want to continue. press 'Y' and 'y' to confirm.\n");
        fflush(stdin);
        scanf("%c", &ch);
    } while (ch == 'Y' || ch == 'y');
    return 0;
}
void push()
{
    int val;
    if (top > 4)
    {
        printf("Stack Over-flow.\n");
    }
    else
    {
        printf("Enter the number to insert.\n");
        scanf("%d", &val);
        top++;
        Array[top] = val;
    }
}
void pop()
{
    int val;
    if (top < 0)
    {
        printf("Stack Under-flow\n");
    }
    else
    {
        val = Array[top];
        top--;
        printf("Deleted value is : %d\n", val);
    }
}
void traverse()
{
    int i;
    if (top == -1)
    {
        printf("Stack Empty\n");
    }
    else
    {
        printf("Display Stack\n");
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", Array[i]);
        }
    }
}
