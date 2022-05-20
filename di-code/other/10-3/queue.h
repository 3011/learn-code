#ifndef QUEUE
#define QUEUE

class queue
{
private:
    int data;
    int top;

public:
    void put(int);
    int get();
};

#endif