#include <iostream>
#include <string>
using namespace std;

struct node
{
    string data;
    node *next;

    node() : data(""), next(NULL) {}
    node(string s) : data(s), next(NULL) {}
};

void addNode(node *head, string data)
{
    node *newNode = new node(data);

    node *p = head;
    while (p->next != NULL)
        p = p->next;

    p->next = newNode;
}

void insertMarit(node *head)
{
    node *newNode = new node("marit");

    node *p = head;
    while (p->next != NULL)
    {
        if (p->next->data == "jone")
        {
            newNode->next = p->next;
            p->next = newNode;
            return;
        }
        p = p->next;
    }

    p->next = newNode;
}

void printNode(node *head)
{
    cout << "链表中的元素依次为：" << endl;
    while (head->next != NULL, head = head->next)
        cout << head->data << " ";
}

int main()
{
    node *head = new node();

    string cin_data;
    cout << "请输入姓名（以0结束）：" << endl;
    while (cin >> cin_data, cin_data != "0")
        addNode(head, cin_data);

    insertMarit(head);

    printNode(head);

    return 0;
}