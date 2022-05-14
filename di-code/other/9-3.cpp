#include <iostream>
#include <string>
using namespace std;

struct node
{
    string data;
    node *next;

    node(string s) : data(s), next(NULL) {}
    node() : data(""), next(NULL) {}
};

void addNode(node *head, string data)
{
    node *newNode = new node(data);

    node *p = new node;
    p = head;
    while (p->next != NULL)
        p = p->next;

    p->next = newNode;
}

int main()
{
    node *head = new node("marit");

    string cin_data;
    cout << "请输入姓名（以0结束）：" << endl;
    while (cin >> cin_data, cin_data != "0")
        addNode(head, cin_data);

    cout << "链表中的元素依次为：" << endl;
    do
        cout << head->data << " ";
    while (head->next != NULL, head = head->next);

    return 0;
}