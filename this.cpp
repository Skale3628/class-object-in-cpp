//THIS  Pointer

#include<iostream>
class demo{
    int x=10;
    int y=20;
    public:
    void info(){
        std::cout<<this<<std::endl;
         std::cout<<this->x<<std::endl;
          std::cout<<this->y<<std::endl;
    }
};
int main(){
    demo obj;
     //std::cout<<obj<<std::endl;               //error
      std::cout<<&obj<<std::endl;
      obj.info();
      return 0;
}