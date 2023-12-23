//C Program to Implement a Queue using an Array
#include <stdio.h>
#define MAX 5
int queue_array[MAX];
int rear = - 1;
int front = - 1;

void enqueue();
void dequeue();


int main()
{
    int choice;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default:
            printf("Wrong choice \n");
        }
    }
}

void enqueue()
{
    int add_item;
    if ((rear+1) % MAX == front) // f=0 and r=4
    {
            printf("Queue is on Overflow \n");
            return;
    }
    else
    {
        if (rear == - 1)
        /*If queue is initially empty */
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = (rear + 1) % MAX;
        queue_array[rear] = add_item;
    }
}

/*End of insert()*/

void dequeue()
{
    if (front == - 1 )
    {
        printf("Queue is on Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        if(front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % MAX;
        }
    }
}

/*End of delete() */

void display()
{
    int i;
    if (front == - 1)
    {
        printf("Queue is empty \n");
        return;
    }
    else
    {
        printf("Queue is : \n");

        for (i = front; i != rear; i = (i + 1) % MAX )
        printf("%d  ", queue_array[i]);
        if(i == rear)
        {
            printf("%d  ", queue_array[i]);
        }
        printf("\n");
    }
}
/*End of display() */
