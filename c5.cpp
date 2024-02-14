#include<iostream>
class demo{
    
    int x=10;
    int y=20;
    
    protected:
    int z=30;
     public:
    void disp(){
        std::cout<<x<<y<<z<<std::endl;
    }
};
int main(){
    demo obj;
    obj.disp();
    return 0;
}