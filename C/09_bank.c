#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 100

typedef struct BankCustomer {
    int id;
    int tArrival;
    int tService;
} Customer;

typedef Customer Element; //const
Element data[MAX_QUEUE_SIZE];
int front, rear;

void error(char str[]){
    printf("%s\n", str);
    exit(1);
}

void init_queue(){
    front = rear = 0;
}

int is_empty(){
    return front == rear;
}

int is_full(){
    return front == (rear + 1) % MAX_QUEUE_SIZE;
}

int size(){
    return (rear - front + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
}

void enqueue(Element val){
    if (is_full())
        error("queue error");
    rear = (rear + 1) % MAX_QUEUE_SIZE;
    data[rear] = val;
}

Element dequeue(){
    if (is_empty())
        error("queue empty error");
    front = (fornt + 1) % MAX_QUEUE_SIZE;
    return data[front];
}


