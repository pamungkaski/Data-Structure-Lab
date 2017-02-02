//
// Created by Ki Ageng Satria Pamungkas on 2/2/17.
//
#include <iostream>
void Show(int ar[3][3]){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if (j==2){
                std::cout<< ar[i][j]<<std::endl;
            }
            else {
                std::cout<< ar[i][j]<<" ";
            }
        }
    }
}

void Swap(int ar1[3][3],int ar2[3][3],int x1,int y1, int x2, int y2){
    ar1[x1][y1]=ar1[x1][y1]+ar2[x2][y2];
    ar2[x2][y2]=ar1[x1][y1]-ar2[x2][y2];
    ar1[x1][y1]=ar1[x1][y1]-ar2[x2][y2];
}

void Swap_pointer(int *p1, int *p2){
    *p1= *p1+*p2;
    *p2= *p1-*p2;
    *p1= *p1-*p2;
}