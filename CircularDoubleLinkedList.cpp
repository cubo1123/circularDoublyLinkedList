#include "CircularDoubleLinkedList.h"

CircularDoubleLinkedList::CircularDoubleLinkedList()
{
    this->first = nullptr;
    this->last = nullptr;
}

bool CircularDoubleLinkedList::addFirst(string data, int id)
{
    if(first == nullptr){
        return add(data,id);
    }

    if(!checkId(id)){
        return false;
    }

    if(first == last){
        Node* n = new Node(data,id,first,last);
        this->first->setPrev(n);
        this->first->setNext(n);
        this->first = n;
        return true;
    }

    Node* n = new Node(data,id,first,last);
    this->first->setPrev(n);
    this->last->setNext(n);
    this->first = n;
}

bool CircularDoubleLinkedList::add(string data, int id)
{
    if(!checkId(id)){
        return false;
    }
    if(first == nullptr){
        Node* n = new Node(data,id,nullptr,nullptr);
        first = n;
        last = n;
        return true;
    }
    Node* n = new Node(data,id,first,last);
    this->last->setNext(n);
    this->first->setPrev(n);
    this->last = n;
    return true;
}

bool CircularDoubleLinkedList::addAfter(string data, int id, int prev)
{
    Node* temp = getNode(prev);
    if(temp == nullptr){
        return false;
    }
    if(!checkId(id)){
        return false;
    }

    if(temp == first){
        Node* n = new Node(data,id,this->first->getNext(),first);
        this->first->getNext()->setPrev(n);
        this->first->setNext(n);
        return true;
    }

    if(temp == last){
        Node* n = new Node(data,id,first,last);
        this->last->setNext(n);
        this->first->setPrev(n);
        this->last = n;
        return true;
    }

    Node* n = new Node(data,id,temp->getNext(),temp);
    temp->getNext()->setPrev(n);
    temp->setNext(n);
    return true;

}

bool CircularDoubleLinkedList::remove(int id)
{
    if(first == nullptr){
        return false;
    }

    Node* temp = getNode(id);
    if(temp == nullptr){
        return false;
    }
    if(temp == first && temp == last){
        first = nullptr;
        last = nullptr;
        return true;
    }

    if(temp == first){
        this->first = this->first->getNext();
        this->first->setPrev(this->last);
        this->last->setNext(first);
        return true;
    }
    if(temp == last){
        this->last = this->last->getPrev();
        this->last->setNext(first);
        this->first->setPrev(last);
        return true;
    }

    temp->getNext()->setPrev(temp->getPrev());
    temp->getPrev()->setNext(temp->getNext());
    return true;

}

bool CircularDoubleLinkedList::update(int id, string data)
{
    Node* temp = getNode(id);
    if(temp){
        temp->setData(data);
        return true;
    }
    return false;
}

Node* CircularDoubleLinkedList::get(int id)
{
    Node* temp = getNode(id);
    if(temp){
        return temp;
    }
    return nullptr;
}

void CircularDoubleLinkedList::show()
{
    Node* temp = first;
    while (temp) {
        cout<<"Soy:"<< temp->getData() << " Next:" << temp->getNext()->getData() << " Prev:" << temp->getPrev()->getData() <<endl;
        if(temp->getNext() == first){
            break;
        }
        temp = temp->getNext();
    }
}

bool CircularDoubleLinkedList::checkId(int id)
{
    if(first == nullptr){
        return true;
    }

    if(first == last && first->getId()!= id){
        return true;
    }

    Node* temp = first;
    while (temp) {
        if(temp->getId() == id){
            return false;
        }
        if(temp->getNext() == first){
            return true;
        }
        temp = temp->getNext();
    }
}

Node *CircularDoubleLinkedList::getNode(int id)
{
    if(first == nullptr){
        return nullptr;
    }

    if(first == last && first->getId()== id){
        return first;
    }

    Node* temp = first;
    while (temp) {
        if(temp->getId() == id){
            return temp;
        }
        if(temp->getNext() == first){
            return nullptr;
        }
        temp = temp->getNext();
    }
}
