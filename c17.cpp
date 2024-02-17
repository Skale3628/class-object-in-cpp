#include<iostream>

class demo{
    int x=10;       //instance variable
    int y=20;       //instance variable

    public:
    demo(int a,int b){
        x=a;
        y=b;
    }
    void disp(){
        std::cout<<x<<std::endl;
        std::cout<<y<<std::endl;
    }
};
int main(){
    demo obj(100,200);
    obj.disp();
    return 0;
}