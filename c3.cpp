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
    obj2->fun();        //(*obj).fun        x,y=10,20
    
    delete obj2;
    
    obj2->fun();         //(*obj).fun       x,y=0,0
    return 0;
}