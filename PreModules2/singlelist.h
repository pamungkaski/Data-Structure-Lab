//
// Created by Ki Ageng Satria Pamungkas on 2/9/17.
//

#ifndef PREMODULES2_SINGLELIST_H
#define PREMODULES2_SINGLELIST_H

#include <iostream>
#include <string>

using namespace std;


typedef int infotype;

typedef struct ElmList *alamat;
struct ElmList {
    infotype inf;
    alamat next;
};

struct List{
    alamat first;
};


void CreateList(List &L);
alamat alocation(infotype x);
void dealocation(alamat P);
void insertFirst(List &L,alamat P);
void insertLast(List &L, alamat P);
void insertAfter(List &L,alamat prec,alamat P);
alamat findElm(List L,infotype x);
void deleteFirst(List &L,alamat P);
void deleteLast(List &L,alamat P);
void deleteAfter(List &L,alamat Prec,alamat P);
void printInfo(List L );



#endif //PREMODULES2_SINGLELIST_H
