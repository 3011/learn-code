#include "queue.h"
#include <iostream>
using namespace std;

void queue::put(int num)
{
    node *newNode = new node;
    newNode->data = num;
    newNode->next = head;
    head = newNode;
}

int queue::get()
{
    int data = head->data;
    node *delNode = head;
    head = head->next;
    delete delNode;
    return data;
}