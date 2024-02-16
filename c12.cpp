//static variables 
//---------------------------------------------------------

#include<iostream>

class demo{
    int x=10;
    public:
    static int y;           //declaration
};
int demo::y=20;             //initialization
int main(){
    demo obj1;
    demo obj2;
    std::cout<<demo::y<<std::endl;
    obj2.y=50;
    std::cout<<demo::y<<std::endl;
    return 0;
}