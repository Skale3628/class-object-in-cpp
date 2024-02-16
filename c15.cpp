//no argument constructor

#include<iostream>
class demo{
    public:
    demo(){
        std::cout<<"in constructor"<<std::endl;
        std::cout<<this<<std::endl;
    }
};
int main(){
    demo obj;
    std::cout<<&obj<<std::endl;
    return 0;
}