//no argument ,parameterised ,copy constructor

#include<iostream>

class demo{
    public:
    demo(){
        std::cout<<"no-args constructor"<<std::endl;
    }
    demo(int x){
        std::cout<<"para constructor"<<std::endl;
        std::cout<<x<<std::endl;
    }
    demo(demo &xyz){                                 //demo(demo xyz)->invalid constructor; you probably meant 'demo (const demo&)'
        std::cout<<"copy constructor"<<std::endl;
    }
};
int main(){
    //demo obj1();        //method declaration
    //demo obj2{};      //no argument constructor (public)
    
    demo obj1;
    demo*obj2=new demo();


    demo obj3(10);
    demo*obj4=new demo(20);
    return 0;
}