//member function
//---------------------------------------------------------

#include<iostream>
class demo{
    int x=10;
    static int y;

    public:
    void disp(){
        std::cout<<x<<std::endl;
        std::cout<<y<<std::endl;

    }
    static void info(){
         // std::cout<<x<<std::endl;
        std::cout<<y<<std::endl;


    }
};
int demo::y=20;     //static variable initialization  (it should be done  outside the class)
int main(){
    demo obj;
    obj.disp();
    obj.info();
    demo::info();
    return 0;
}