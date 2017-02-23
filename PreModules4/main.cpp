#include <iostream>
#include "singlelist.h"
using namespace std;

int main() {
    //Soal 2
    List L;
    alamat P =NULL;
    CreateList(L);

    insertFirst(L, alocation(3));
    insertFirst(L, alocation(8));
    insertFirst(L, alocation(7));
    insertFirst(L, alocation(4));
    insertFirst(L, alocation(-1));
    insertFirst(L, alocation(2));
    insertFirst(L, alocation(4));
    printInfo(L);
    P=findMinimum(L);
    cout<<"Minumum= "<<P->inf;
    //Soal 3
    List Q;
    alamat P1=NULL;
    alamat P2=NULL;

    CreateList(Q);
    cout<<"...1..."<<endl;
    insertAscending(Q,3);
    insertAscending(Q,18);
    insertAscending(Q,11);
    printInfo(Q);

    cout<<"...2..."<<endl;
    insertAscending(Q,8);
    insertAscending(Q,1);
    insertAscending(Q,20);
    printInfo(Q);
    return 0;
}