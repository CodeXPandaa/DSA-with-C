#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void qInsert();
void qDelete();
void traverse();
int Arr[5];
int front = -1, rear = -1;
int main()
{
    int choice;
    char ch;
    do
    {
        printf("Enter 1 for Insertion in a Queue\n");
        printf("Enter 2 for Deletion in a Queue\n");
        printf("Enter 3 for traverse of a Queue\nEnter your Choice : \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            qInsert();
            break;
        case 2:
            qDelete();
            break;
        case 3:
            traverse();
            break;
        default:
            printf("You entered a wrong choice.\n");
        }
        printf("\nDo you want to continue press 'Y' or 'y'. to continue\n");
        fflush(stdin);
        scanf("%c", &ch);
    } while (ch == 'Y' || ch == 'y');
    return 0;
}
void qInsert()
{
    int value;
    if (rear >= 4)
    {
        printf("Queue Overflow.\n");
    }
    else
    {
        printf("Enter the value to insert : \n");
        scanf("%d", &value);
        if (rear == -1)
        {
            front += 1;
            rear += 1;
            Arr[rear] = value;
        }
        else
        {
            rear += 1;
            Arr[rear] = value;
        }
    }
}
void traverse()
{
    if (front < 0)
    {
        front += 1;
    }
    int size = sizeof(Arr) / sizeof(int);
    printf("Displaying Queue : \n");
    for (int i = front; i < size; i++)
    {
        printf("%d\n", Arr[i]);
    }
}
void qDelete()
{
    int value;
    if (front < 0)
    {
        printf("Queue UnderFLow.");
    }
    else
    {
        value = Arr[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front += 1;
        }
        printf("Deleted element is : %d", value);
    }
}
