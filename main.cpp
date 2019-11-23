#include <iostream>
#include<CircularDoubleLinkedList.h>
using namespace std;

int main()
{
    CircularDoubleLinkedList l;
    l.add("uno",1);
    l.add("dos",2);
    l.add("tres",3);
    l.add("cuatro",4);
    l.add("cinco",5);
    l.addAfter("Hail Hitler",6,3);
    l.show();
    cout<<"finish"<<endl;
    return 0;
}
