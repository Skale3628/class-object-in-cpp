//copy constructor

#include<iostream>

class demo{
    public:
    demo(){
        std::cout<<"in constructor"<<std::endl;
    }
    demo(int x){
        std::cout<<"in parameter"<<std::endl;
    }
    demo(demo &ref){
        std::cout<<"in copy"<<std::endl;
    }
};
//void fun(demo obj){
  demo fun(){
    demo obj5(50);
    return obj5;

}

int main(){
    demo obj1;
    demo obj2=obj1;                //copy constructor call
    //fun(obj1);                  //copy constructor call
    fun();
    //obj3=obj1;                 //no call for copy constructor
    return 0;
}