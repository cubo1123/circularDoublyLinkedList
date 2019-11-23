#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;

class Node
{
public:
    Node();
    Node(string data,int id,Node* next,Node* prev);

    string getData() const;
    void setData(const string &value);

    int getId() const;
    void setId(int value);

    Node *getNext() const;
    void setNext(Node *value);

    Node *getPrev() const;
    void setPrev(Node *value);

private:
    int id;
    string data;
    Node* next;
    Node* prev;
};

#endif // NODE_H
