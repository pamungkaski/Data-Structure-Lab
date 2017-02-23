//
// Created by Ki Ageng Satria Pamungkas on 2/23/17.
//
#include <iostream>
#include "doublecircular.h"

using namespace std;
void CreateList(List &L){
    L.first=NULL;
};
address alokasi( infotype x){
    address P= new doublecircular;
    P->next =NULL;
    P->prev =NULL;
    P->info = x;
    return P;
};
void dealokasi( address P ){
    delete(P);
};
void insertFirst(List &L,address P){
    if(L.first==NULL){
        L.first=P;
        P->next=L.first;
    }else{
        P->next=L.first;
        L.first->prev=P;
        L.first=P;
    }
};
void insertAfter( List &L,address Prec,address P){
    P->next=Prec->next;
    Prec->next=P;
    P->prev=Prec;
};
void insertLast( List &L,address  P){
    if (L.first==NULL){
        insertFirst(L,P);
    } else{
        address x =L.first;
        while(x->next!=L.first){
            x= x->next;
        }
        P->next=L.first;
        P->prev=x;
        x->next=P;
    }
};
address findElm(List &L,infotype x){
    address P =L.first;
    while((P->info!=x)and (P->next!=L.first)){
        P=P->next;
    }
    if((P->next==L.first)and (P->info!=x)){
        P=NULL;
    }
    return P;
};
void deleteFirst(List &L,address P){
    if (L.first!=NULL){
        if (L.first->next==L.first){
            P=L.first;
            L.first=NULL;
        }else{
            address x= L.first;
            while(x->next!=L.first){
                x=x->next;
            }
            P=L.first;
            L.first=P->next;
            L.first->prev=NULL;
            x->next=L.first;
        }
    }
};
void deleteAfter(List &L,address Prec,address P){
    if(L.first!=NULL){
        P=Prec->next;
        Prec->next=P->next;
    }
};
void deleteLast(List &L,address P){
    if (L.first!=NULL){
        if (L.first->next==L.first){
           deleteFirst(L,P);
        }else{
            address x =L.first;
            while(x->next->next!=L.first){
                x=x->next;
            }
            P=x->next;
            x->next=L.first;
        }
    }
};
void printInfo(List L){
    if (L.first!=NULL){
        address P= L.first;
        do{
            cout<<P->info<<", ";
            P=P->next;
        }while(P!=L.first);
        cout<<endl;
    }
};
void deleteValue(List &L,infotype x){
    address P= findElm(L,x);
    if (P!=NULL) {
        if (P->next == L.first) {
            deleteLast(L, P);
        } else if (P == L.first) {
            deleteFirst(L, P);
        } else {
            deleteAfter(L, P->prev, P);
        }
        dealokasi(P);
    };
};