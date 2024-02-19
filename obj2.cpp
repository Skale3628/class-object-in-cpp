//Defult constructor


#include<iostream>

class demo{
    int x=10;
    int y=20;

    public:
    demo(){
        std::cout<<"no"<<std::endl;
    }
    demo(int x=50,int y=30){
        this->x=x;
        this->y=y;
        std::cout<<"para"<<std::endl;
        std::cout<<x<<y<<std::endl;
    }
    void info(demo obj){

    }
};
int main(){
   // demo obj2;      //error
    demo obj1(100);
    return 0;
}