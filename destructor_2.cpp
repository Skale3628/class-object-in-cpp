#include<iostream>
class demo{
    public:
    demo(){
        std::cout<<"in constructor"<<std::endl;
    }
    ~demo(){
        std::cout<<"destructor"<<std::endl;
    }
    
    
};
int main(){
    demo obj1;
    /*{
        demo obj2;
    }*/
    demo *obj2=new demo();                          //it will create a new memory space wont be deleted with destructor           
    std::cout<<"end main"<<std::endl;
    delete obj2;               //use ot delete the memory (new demo)          
    return 0;
}