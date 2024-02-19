#include<iostream>
class player {
   int jerno =07;                    //first way to initialize  
   std::string name="ronaldo";        //first way to initialize  
    //public:
    //nt jerno ;
  // std::string name;

    public:
    void info(){
        std::cout<<jerno<<" = "<<name<<std::endl;
    }
};
int main(){
    player obj1;                    //address of obj
   // cr.jerno=07;            //second way to initialize  
  // cr.name="ronaldo";      //second way to initialize    
   player *obj2=new player();
   
    obj1.info();
    //obj2.info();                //=>(*obj2).info()
}