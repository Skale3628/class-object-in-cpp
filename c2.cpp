#include<iostream>
class demo{
    int x=10;       //instance variables
     int y=20;
    
    public:
    demo(){
         std::cout<<"in constructor"<<std::endl;
        
    }//public:
     void fun(){
        std::cout<<x<<std::endl;
         std::cout<<y<<std::endl;
        
     }

};
int main(){
    demo obj;
    demo *obj2=new demo();

    obj.fun();
    obj2->fun();
    return 0;
}