//static and non static member function

#include<iostream>
class demo{
    int x=10;
    static int y;

    public:
    void fun(){                             //local
        int a=10;
        static int b=20;
        std::cout<<x<<std::endl;
         std::cout<<y<<std::endl;
          std::cout<<a<<std::endl;
           std::cout<<b<<std::endl;
    }
    static void gun(){              //local
         int a=10;
        static int b=20;
        // std::cout<<x<<std::endl;     //non static 
         std::cout<<y<<std::endl;
          std::cout<<a<<std::endl;
           std::cout<<b<<std::endl;

    }
    
};
int demo::y=20;
int main(){
    demo obj;
    obj.fun();
    obj.gun();
    return 0;
    
    /*demo obj1;
    demo *obj2=new demo();
    obj1.fun();
    obj1.gun();
    
    obj2->fun();
    obj2->gun();
    return 0;
    */
}