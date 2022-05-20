#ifndef QUEUE
#define QUEUE

class queue
{
private:
    int data;
    queue *next;

public:
    void put(int);
    int get();
};

#endif