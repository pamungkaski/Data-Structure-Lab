#include <iostream>
#include "student.cpp"
#include "arpoi.cpp"
using namespace std;

void Question1(){
    Student s;
    bool ok;
    s.name = "Budi";

    ok = Mark_input(s, 1, 90);
    std::cout << ok << std::endl;
    ok = Mark_input(s, 5, 815);
    std::cout << ok << std::endl;
    ok = Mark_input(s, 15, 75);
    std::cout << ok << std::endl;

    std::cout << Mark_avarage(s);

    Show_student(s);
};
void Question2(){
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int B[3][3] = {{9,7,6},{2,4,6},{0,0,0}};
    int *pointer1 = NULL;
    int *pointer2 =NULL;
    std::cout<< "Array A"<<std::endl;
    Show(A);
    std::cout<< "Array B"<<std::endl;
    Show(B);
    Swap(A,A,0,2,1,1);
    std::cout<< "Array A"<<std::endl;
    Show(A);

    Swap(A,B,1,0,2,2);
    std::cout<< "Array A"<<std::endl;
    Show(A);
    std::cout<< "Array B"<<std::endl;
    Show(B);

    pointer1 = &A[2][0];
    pointer2 = &B[0][0];
    Swap_pointer(pointer1,pointer2);
    std::cout<< "Array A"<<std::endl;
    Show(A);
    std::cout<< "Array B"<<std::endl;
    Show(B);
};
void Question3(){
    int data[15];
    int x = 30;
    for(int i=0; i<15;i++){
        data[i]=x;
        x-=2;
    }
    int *p1, *p2, *p3;
    p1=&data[3];
    p2=&data[4];
    std::cout<< data[3]<<" "<<data[7]<<std::endl;
    std::cout<< &data[3]<<" "<<&data[7]<<std::endl;
    std::cout<< *p2<<" "<<*p1<<std::endl;
    std::cout<< &p2<<" "<<&p1<<std::endl;
    std::cout<< p2<<" "<<p1<<std::endl;

    p3 = p1;
    std::cout<<&p1<<" "<<&p2<<" "<<&p3<<std::endl;
    std::cout<<p1<<" "<<p2<<" "<<p3<<std::endl;
    std::cout<<*p1<<" "<<*p2<<" "<<*p3<<std::endl;

    *p3 = *p2;
    std::cout<<p1<<" "<<p2<<" "<<p3<<std::endl;
    std::cout<<*p1<<" "<<*p2<<" "<<*p3<<std::endl;

    p3 =p2;
    *p2 = 60;
    p1 =&data[9];
    p2+=1;
    std::cout<<p1<<" "<<p2<<" "<<p3<<std::endl;
    std::cout<<*p1<<" "<<*p2<<" "<<*p3<<std::endl;
}
int main() {
    char choice;
    std::cout<<"Interface"<<std::endl;
    std::cout<<"1.Question 1"<<std::endl;
    std::cout<<"2.Question 2"<<std::endl;
    std::cout<<"3.Question 3"<<std::endl;
    std::cout<<"Choose: ";
    std::cin >> choice;
    switch(choice){
        case '1': Question1();break;
        case '2': Question2();break;
        case '3': Question3();break;
    };
    return 0;
}