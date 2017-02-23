//
// Created by Ki Ageng Satria Pamungkas on 2/23/17.
//

#include "singlelist.h"
#include <iostream>

using namespace std;

void CreateList(List &L){
    L.first = NULL;
};
alamat alocation(infotype x){
    alamat P = new ElmList;
    P->inf = x;
    P->next = NULL;
    return  P;
};
void dealocation(alamat P){
    delete P;
};
void insertFirst(List &L,alamat P){
    if (L.first == NULL){
        L.first = P;
    }
    else {
        P->next = L.first;
        L.first = P;
    }
};
void insertLast(List &L, alamat P){
    alamat x= L.first;
    while(x->next != NULL){
        x = x->next;
    }
    x->next = P;
};
void insertAfter(List &L,alamat prec,alamat P){
    P->next = prec->next;
    prec->next = P;
};
alamat findElm(List L,infotype x){
    alamat a = L.first;
    while((a->inf!=x)and(a->next!=NULL)){
        a = a->next;
    }
    if((a->next==NULL) and (a->inf!=x)){
        a= a->next;
    }
    return a;
};
void deleteFirst(List &L,alamat P){
    if(L.first!=NULL) {
        P = L.first;
        L.first = L.first->next;
    }
};
void deleteLast(List &L,alamat P){
    if(L.first!=NULL) {
        alamat x = L.first;
        while(x->next->next!= NULL){
            x= x->next;
        }
        P = x->next;
        x->next= NULL;
    }
};
void deleteAfter(List &L,alamat Prec,alamat P){
    P = Prec->next;
    if (P== NULL){
        Prec->next = P;
    } else{
        Prec->next = P->next;
    }
};

void printInfo(List L ){
    alamat x = L.first;
    if (x!= NULL){
        while (x!=NULL){
            cout<<x->inf<<", ";
            x = x->next;
        }
        cout<<endl;
    } else{
        cout<<"List Kosong"<<endl;
    }
};
alamat findMinimum(List L){
    alamat x= L.first;
    alamat min = x;
    while(x!=NULL){
        if (x->inf<min->inf){
            min=x;
        }
        x= x->next;
    }
    return min;
};
void insertAscending(List&L, infotype x){
    if(L.first==NULL){
        insertFirst(L,alocation(x));
    }else{
        alamat P =L.first;
        if (P->inf>x){
            insertFirst(L,alocation(x));
        }else {
            while (P->inf < x) {
                if (P->next == NULL) {
                    insertLast(L, alocation(x));
                } else if (P->next->inf >= x) {
                    insertAfter(L, P, alocation(x));
                };
                P=P->next;
            }
        }

    }

};