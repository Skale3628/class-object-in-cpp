#include<iostream>

class demo{
    int x=10;       //instance variable
    int y=20;       //instance variable

    public:
    demo(){
        std::cout<<"no-arg constructor"<<std::endl;
    
    }
   demo(int x,int y){
        this->x=x;
        this->y=y;
        std::cout<<"para constructor"<<std::endl;
    }
   demo(demo &xyz){
        std::cout<<"copy constructor"<<std::endl; 
    }
};
int main(){
    demo obj1;
    demo obj2(1000,2000);
    demo  obj3=obj1;        //initialize using copy constructor
    demo obj4;
    obj4=obj1;              //assign (so no use of copy constructor)
    return 0;
}