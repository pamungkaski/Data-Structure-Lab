#include <iostream>
#include "singlelist.h"
using namespace std;
int main() {
    List L;
    alamat P1 =NULL;

    CreateList(L);

    cout<<"...1..."<<endl;
    printInfo(L);

    cout<<"...2..."<<endl;
    deleteFirst(L,P1);
    deleteLast(L,P1);

    cout<<"...3..."<<endl;
    P1 = alocation(10);
    insertFirst(L,P1);

    P1 = alocation(20);
    insertFirst(L,P1);

    printInfo(L);

    cout<<"...4..."<<endl;
    P1 = alocation(6);
    insertLast(L,P1);

    P1 = alocation(30);
    alamat P2 = findElm(L,6);
    insertAfter(L,P2,P1);
    printInfo(L);

    cout<<"...5..."<<endl;
    P1 = findElm(L,20);
    cout<<"info P1= "<<P1->inf<<endl;
    cout<<"P1= "<<P1<<endl;

    cout<<"...6..."<<endl;
    deleteLast(L,P1);
    printInfo(L);

    cout<<"...7..."<<endl;
    deleteFirst(L,P1);
    printInfo(L);

    cout<<"...8..."<<endl;
    P1 = alocation(55);
    insertFirst(L,P1);
    printInfo(L);

    cout<<"...9..."<<endl;
    P2 = findElm(L,55);
    deleteAfter(L,P2,P1);
    printInfo(L);

    cout<<"...10..."<<endl;
    P2= findElm(L,6);
    deleteAfter(L,P2,P1);
    printInfo(L);

    cout<<"...11..."<<endl;
    deleteFirst(L,P1);
    cout<<"info P1= "<<P1->inf<<endl;
    cout<<"Isi List"<<endl;
    printInfo(L);
    return 0;
}