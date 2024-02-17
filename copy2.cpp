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
/*//void fun(demo obj){
  demo fun(){
    demo obj5(50);
    return obj5;

}
*/
int main(){
    demo obj1;
    demo obj2;
    demo obj3;
    demo arr[]={obj1,obj2,obj3};            //object initialization
    return 0;
}