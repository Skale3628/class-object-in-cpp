//Passing object as an argument

#include<iostream>
class demo{
    int x=10;
    int y=20;

    public:
    demo(int x,int y){
        this->x=x;
        this->y=y;
    }
    void info(){
        std::cout<<x<<std::endl;
        std::cout<<this->y<<std::endl;
    }
};

int main(){
    int a,b;

    std::cout<<"enter values"<<std::endl;
    std::cin>>a>>b;

    demo obj1(a,b);
 //   obj1.info(a,b);
    return 0;
}