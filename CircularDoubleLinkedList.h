#ifndef CIRCULARDOUBLELINKEDLIST_H
#define CIRCULARDOUBLELINKEDLIST_H
#include<iostream>
#include<Node.h>

class CircularDoubleLinkedList
{
public:
    CircularDoubleLinkedList();
    bool addFirst(string data,string address,float average,int id);
    bool add(string data,string address,float average,int id);
    bool addAfter(string data,string address,float average,int id,int prev);
    bool remove(int id);
    bool update(int id,string data,string address, float average);
    Node* get(int id);
    void show();


private:
    bool checkId(int id);
    Node* getNode(int id);
    Node* first;
    Node* last;
};

#endif // CIRCULARDOUBLELINKEDLIST_H
