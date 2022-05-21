#ifndef QUEUE
#define QUEUE

struct node
{
    int data;
    node *next;
};

class queue
{
private:
    node *head;

public:
    void put(int);
    int get();
};

#endif