


#include<iostream>

class demo{
    int x=10;
    int y=20;

    public:
    demo(){
        std::cout<<"no"<<std::endl;
        std::cout<<x<<y<<std::endl;
    }
    demo(int x,int y){
        this->x=x;
        this->y=y;
        std::cout<<"para"<<std::endl;
        std::cout<<x<<y<<std::endl;
    }
    void info(demo obj){
        std::cout<<x<<y<<std::endl;
        std::cout<<obj.x<<obj.y<<std::endl;
    }
};
int main(){
    demo obj1;      
    demo obj2(100,200);
    obj2.info(obj1);            //demo obj=obj1;
    return 0;
}