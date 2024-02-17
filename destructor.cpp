//Destructor
//-----------------------------------------------------------------------------

#include<iostream>

class demo{
    public:
    int x=10;
    demo(){
        //this->x=50;
        std::cout<<"in constructor"<<std::endl;
        std::cout<<x<<std::endl;
    }
    demo(int x){
        this->x=x;
        std::cout<<"in constructor para"<<std::endl;
        std::cout<<x<<std::endl;
    }
   void getdata(){
    std::cout<<x<<std::endl;
    }
    ~demo(){
        std::cout<<"destructor"<<std::endl;
    }


};

int main(){
    demo obj1(50);
    std::cout<<"end main"<<std::endl;
    return 0;
}