#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;

class Node
{
public:
    Node();
    Node(string data,string address,float average,int id,Node* next,Node* prev);

    string getData() const;
    void setData(const string &value);

    int getId() const;
    void setId(int value);

    Node *getNext() const;
    void setNext(Node *value);

    Node *getPrev() const;
    void setPrev(Node *value);

    string getAddress() const;
    void setAddress(const string &value);

    float getAverage() const;
    void setAverage(float value);

private:
    int id;
    string data;
    float average;
    string address;
    Node* next;
    Node* prev;
};

#endif // NODE_H
