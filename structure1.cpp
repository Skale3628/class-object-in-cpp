#include<iostream>

struct player{
    int jerno=18;
    char name[30]="virat kohli";

    void disp(){                                //another way to  define structure
        std::cout<<jerno<<std::endl;
        std::cout<<name<<std::endl;
    }
};
int main(){
    player obj;
   // std::cout<<obj.jerno<<std::endl;
   // std::cout<<obj.name<<std::endl;
    
    obj.disp();
    return 0;
}