#include <iostream>
#include<CircularDoubleLinkedList.h>
using namespace std;

int main()
{
    CircularDoubleLinkedList l;
    int opc = 0;
    float average;
    int id,prev;
    string data,address;
    while (opc != -1) {
        cout<<"1.-addFirst"<<endl;
        cout<<"2.-add"<<endl;
        cout<<"3.-addAfter"<<endl;
        cout<<"4.-remove"<<endl;
        cout<<"5.-update"<<endl;
        cout<<"6.-get"<<endl;
        cout<<"7.-showAll"<<endl;
        cout<<"\t-1.-Exit"<<endl;

        cin>>opc;
        switch (opc) {
        case 1:{
            cout<<"ingrese el id"<<endl;
            cin>>id;
            cout<<"ingrese el nombre"<<endl;
            cin>>data;
            cout<<"ingrese la direccion"<<endl;
            cin>>address;
            cout<<"ingrese el promedio"<<endl;
            cin>>average;
            if(l.addFirst(data,address,average,id)){
                cout<<"Agregado exitosamente"<<endl;
            }else {
                cout<<"No pudo ser agregado"<<endl;
            }
            break;
        }

        case 2:{
            cout<<"ingrese el id"<<endl;
            cin>>id;
            cout<<"ingrese el nombre"<<endl;
            cin>>data;
            cout<<"ingrese la direccion"<<endl;
            cin>>address;
            cout<<"ingrese el promedio"<<endl;
            cin>>average;
            if(l.add(data,address,average,id)){
                cout<<"Agregado exitosamente"<<endl;
            }else {
                cout<<"No pudo ser agregado"<<endl;
            }
            break;
        }

        case 3:{
            cout<<"ingrese el id"<<endl;
            cin>>id;
            cout<<"ingrese el nombre"<<endl;
            cin>>data;
            cout<<"ingrese la direccion"<<endl;
            cin>>address;
            cout<<"ingrese el promedio"<<endl;
            cin>>average;
            cout<<"Ingrese el id del elemente a revasar"<<endl;
            cin>>prev;
            if(l.addAfter(data,address,average,id,prev)){
                cout<<"Agregado exitosamente"<<endl;
            }else {
                cout<<"No pudo ser agregado"<<endl;
            }
            break;
        }

        case 4:{
            cout<<"ingrese el id a eliminar"<<endl;
            cin>>id;
            if(l.remove(id)){
                cout<<"Eliminado exitosamente"<<endl;
            }else {
                cout<<"No pudo ser eliminado"<<endl;
            }
            break;
        }

        case 5:{
            cout<<"ingrese el id a actualizar"<<endl;
            cin>>id;
            cout<<"ingrese el nombre"<<endl;
            cin>>data;
            cout<<"ingrese la direccion"<<endl;
            cin>>address;
            cout<<"ingrese el promedio"<<endl;
            cin>>average;
            if(l.update(id,data,address,average)){
                cout<<"Actualizado exitosamente"<<endl;
            }else {
                cout<<"No pudo ser Actualizado"<<endl;
            }
            break;
        }

        case 6:{
            cout<<"ingrese el id a mostrar"<<endl;
            cin>>id;
            Node* temp = l.get(id);
            if(temp){
                cout<<"Soy:"<< temp->getData()<<" Address:"<<temp->getAddress() << " Next:" << temp->getNext()->getData() << " Prev:" << temp->getPrev()->getData() <<endl;
            }else {
                cout<<"No puede ser mostrado"<<endl;
            }
            break;
        }
        case 7:{
            l.show();
            break;
        }
        default:
            break;
        }
    }
    return 0;
}
