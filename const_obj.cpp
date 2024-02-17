//constant object 

#include<iostream>

class demo{
    public:
    int x=10;
    demo(){
        this->x=80;
        std::cout<<"in constructor"<<std::endl;
    }
   void getdata() const {
    
    std::cout<<x<<std::endl;
   }
   ~demo(){
    std::cout<<"destructor"<<std::endl;
   }
};
int main(){
  /*  demo obj;
    obj.getdata();
    obj.x=50;
    obj.getdata();
    return 0; */
    const demo obj;
    std::cout<<obj.x<<std::endl;

    obj.getdata();          // passing 'const demo' as 'this' argument discards qualifiers
}