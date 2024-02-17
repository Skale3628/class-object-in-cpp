#include<iostream>

class player{
    int jerno=18;
    std::string name="kohli";

    public:                                      //without public declaration the class will be private
    void disp(){                                //another way to  define structure
        std::cout<<jerno<<std::endl;
        std::cout<<name<<std::endl;
    }
};
int main(){
    player obj;
  //  std::cout<<obj.jerno<<std::endl;            //error: 'int player::jerno' is private within this context for private 
    obj.disp();
    return 0;
}