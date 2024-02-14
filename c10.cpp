//static and non static member function

#include<iostream>

class demo{
    int x=10;
    static int y;               //static object is bind to a class

    public:
    void disp(){
        std::cout<<x<<std::endl;
        std::cout<<y<<std::endl;

    }
    static void info(){
       // std::cout<<x<<std::endl;          //error
        std::cout<<y<<std::endl;
        disp();
    }
};
int demo::y=20;         //static variable intialization(global)
int main(){
    demo obj;
    obj.disp();

    obj.info();
    demo::info();
    return 0;
}