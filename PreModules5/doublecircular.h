//
// Created by Ki Ageng Satria Pamungkas on 2/23/17.
//

#ifndef PREMODULES5_DOUBLECIRCULAR_H
#define PREMODULES5_DOUBLECIRCULAR_H

typedef int infotype;
typedef struct doublecircular *address;
struct doublecircular {
    infotype info;
    address prev;
    address next;
};
struct List{
    address first;
};
void CreateList(List &L);
address alokasi( infotype x);
void dealokasi( address P );
void insertFirst(List &L,address P);
void insertAfter( List &L,address Prec,address P);
void insertLast( List &L,address  P);
address findElm(List &L,infotype x);
void deleteFirst(List &L,address P);
void deleteAfter(List &L,address Prec,address P);
void deleteLast(List &L,address P);
void printInfo(List L);
void deleteValue(List &L,infotype x);
void reverseList(List &L1,List &L2);


#endif //PREMODULE3_DOUBLECIRCULAR_H
