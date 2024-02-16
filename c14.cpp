#include<iostream>
class demo{
    int x=10;
    static int y;
    public:
    void fun(){
        int a =10;                      //non-satic local variable
        static int b=20;                //static local variable
        std::cout<<x<<std::endl;
        std::cout<<y<<std::endl;
        std::cout<<a<<std::endl;
        std::cout<<b<<std::endl;
    }
    static void gun(){
        int a =10;
        static int b=20;
       // std::cout<<x<<std::endl;
        std::cout<<y<<std::endl;
        std::cout<<a<<std::endl;
        std::cout<<b<<std::endl;

    }
};
int demo::y=20;
int main(){
    demo obj;
    //demo obj1;
    //demo *obj2=new demo();
    obj.fun();
    demo::gun();
    return 0;
}