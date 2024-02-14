#include<iostream>
class player {
   // int jerno =07;                    //first way to initialize  
   //std::string name="ronaldo";        //first way to initialize  
    public:
    int jerno ;
   std::string name;

    public:
    void info(){
        std::cout<<jerno<<" = "<<name<<std::endl;
    }
};
int main(){
    player cr;
    cr.jerno=07;            //second way to initialize  
    cr.name="ronaldo";      //second way to initialize    
    cr.info();
}