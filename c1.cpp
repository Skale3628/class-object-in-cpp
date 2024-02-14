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
    obj.fun();
    return 0;
}