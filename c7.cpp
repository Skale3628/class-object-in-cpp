#include<iostream>

int fun(){
    static int x=10;
    return ++x;
}
int main(){
    std::cout<<fun()<<std::endl;        //11
    std::cout<<fun()<<std::endl;        //12
    std::cout<<fun()<<std::endl;        //13
    return 0;
}
