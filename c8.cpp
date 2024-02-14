#include<iostream>

class demo{
    public:
    int x=10;
    static int y;

    public:
    void fun();
};
int demo::y=20;
void demo::fun(){
    std::cout<<"x="<<x<<std::endl;
    std::cout<<"y="<<y<<std::endl;
}
int main(){
    demo obj1;
    demo obj2;
    obj1.fun();
    obj2.fun();
   // obj.fun();
   obj1.x=50;
   obj1.fun();
    obj2.fun();
    return 0;
}