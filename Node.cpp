#include "Node.h"

Node::Node()
{

}

Node::Node(string data, int id, Node *next, Node *prev)
{
    this->data = data;
    this->id = id;
    this->next = next;
    this->prev = prev;
}

string Node::getData() const
{
    return data;
}

void Node::setData(const string &value)
{
    data = value;
}

Node *Node::getNext() const
{
    return next;
}

void Node::setNext(Node *value)
{
    next = value;
}

Node *Node::getPrev() const
{
    return prev;
}

void Node::setPrev(Node *value)
{
    prev = value;
}

int Node::getId() const
{
    return id;
}

void Node::setId(int value)
{
    id = value;
}
