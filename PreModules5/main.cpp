#include <iostream>
#include "doublecircular.h"
using namespace std;
int main() {
    List L;
    CreateList(L);
    List Q;
    CreateList(Q);
    insertLast(L, alokasi(5));
    insertLast(L, alokasi(15));
    insertLast(L, alokasi(25));
    insertLast(L, alokasi(35));
    insertLast(L, alokasi(45));
    insertLast(L, alokasi(55));
    insertLast(L, alokasi(65));
    insertLast(L, alokasi(75));
    insertLast(L, alokasi(85));
    printInfo(L);
    reverseList(L,Q);
    printInfo(Q);
    deleteValue(L,5);
    deleteValue(L,85);
    deleteValue(L,45);
    printInfo(L);
    return 0;
}