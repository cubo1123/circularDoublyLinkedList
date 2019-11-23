#ifndef CIRCULARDOUBLELINKEDLIST_H
#define CIRCULARDOUBLELINKEDLIST_H
#include<iostream>
#include<Node.h>

class CircularDoubleLinkedList
{
public:
    CircularDoubleLinkedList();
    bool addFirst(string data,int id);
    bool add(string data,int id);
    bool addAfter(string data,int id,int prev);
    bool remove(int id);
    bool update(int id,string data);
    Node* get(int id);
    void show();


private:
    bool checkId(int id);
    Node* getNode(int id);
    Node* first;
    Node* last;
};

#endif // CIRCULARDOUBLELINKEDLIST_H
