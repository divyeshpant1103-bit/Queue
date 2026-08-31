// write a c program to implement queue using array(call by value)
// write a c program to implement queue using array(call by refernce)
//write a program to for stack using queue
//step1 insert element in queue2
//step2 move all element from queue 1 to queue2
//step3 copy all element from queue2 to queue1
//step4 reset Queue2

//queue using stack
//step1 two stack

#include <stdio.h>
#define MAX 10

int isempty(int front, int rear)
{
    return front == -1;
}

int isfull(int rear)
{
    return rear == MAX - 1;
}

int enqueue(int q[], int *front, int *rear, int value)
{
    if (isfull(*rear))
    {
        printf("Overflow\n");
        return 0;
    }
    if (*front == -1)
    {
        *front = 0; // first element being inserted
    }
    (*rear)++;
    q[*rear] = value;
    return 1;
}

int dequeue(int q[], int *front, int rear)
{
    if (isempty(*front, rear))
    {
        printf("Underflow\n");
        return -1;
    }
    int val = q[*front];
    if (*front == rear)
    {
        *front = rear = -1; // queue becomes empty, reset both
    }
    else
    {
        (*front)++;
    }
    return val;
}

void display(int q[], int front, int rear)
{
    if (isempty(front, rear))
    {
        printf("Underflow\n");
        return;
    }
    while (front <= rear)
    {
        printf("%d ", q[front]);
        front++;
    }
    printf("\n");
}

int main()
{
    int q[MAX], rear = -1, front = -1;
    enqueue(q, &front, &rear, 10);
    enqueue(q, &front, &rear, 20);
    enqueue(q, &front, &rear, 30);
    display(q, front, rear);
    dequeue(q, &front, rear);
    display(q, front, rear);
    return 0;
}
