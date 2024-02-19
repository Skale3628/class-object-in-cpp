


#include<iostream>

class demo{
    int x=10;
    int y=20;

    public:
    demo(){
        std::cout<<"no"<<std::endl;
       
    }
    demo(int x,int y){
        this->x=x;
        this->y=y;
        std::cout<<"para"<<std::endl;
        //std::cout<<x<<y<<std::endl;
    }
    demo(demo &ref){
       // std::cout<<x<<y<<std::endl;
      //  std::cout<<obj.x<<obj.y<<std::endl;
      std::cout<<"copy"<<std::endl;
    }
    void access(){
        std::cout<<x<<y<<std::endl;
    }
    demo info(demo &obj){
        obj.x=700;
        obj.y=800;
        return obj;
    }
};
int main(){
    demo obj1; 
    obj1.access();     
    demo obj2(100,200);
    obj2.access();

    demo obj3=obj2;
    obj3.access();
   // demo obj3=obj2.info(obj1);
    return 0;
}