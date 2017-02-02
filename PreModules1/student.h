//
// Created by Ki Ageng Satria Pamungkas on 2/2/17.
//

#ifndef PREMODULES1_STUDENT_H
#define PREMODULES1_STUDENT_H
#include <string>
using namespace std;
class Student{
    public:
        string name;
        double mark[10]={};
};
bool Mark_input(Student &s, int position, double mark);
double Mark_avarage(Student &s);
void Show_student(Student &s);
#endif //PREMODULES1_STUDENT_H
