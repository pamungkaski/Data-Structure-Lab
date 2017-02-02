//
// Created by Ki Ageng Satria Pamungkas on 2/2/17.
//
#include <iostream>
#include "student.h"
bool Mark_input(Student &s, int position, double mark){
    if((mark>=0) and (mark<=100)){
        s.mark[position]= mark;
        return true;
    }else {
        return false;
    };
};
double Mark_avarage(Student &s){
    double sum=0;
    int nmark=0;
    for (int i=0;i<10;i++){
        if ((s.mark[i]>=0) and (s.mark[i] <=100)){
            nmark++;
            sum = sum + s.mark[i];
        };
    };
    return (sum/nmark);
};
void Show_student(Student &s){
    std::cout<<s.name<<std::endl;
    for (int i=0;i<10;i++){
        if ((s.mark[i]>0) and (s.mark[i]<=100)){
            std::cout<<"Mark "<<i+1<<": "<<s.mark[i]<<std::endl;
        };
    };
};