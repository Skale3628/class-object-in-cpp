#include<iostream>

class demo{
    int x=10;
    //static inline int y=30;           //c++ 17 version 
   static int y;
};
int demo::y=20;

int main(){
    demo obj1;
    return 0;
}