#include<iostream>
class company{
    int countEmp=5000;
    std::string name="IBM";
    public:
    company(){                                                              //constructor
        std::cout<<"n company constructor"<<std::endl;
    }
    void compInfo(){
        std::cout<<countEmp<<std::endl;
        std::cout<<name<<std::endl;

    }
};
class employee{
    int empid=10;
    float empsal=95.00f;

    public:
    employee(){
        std::cout<<"in employee constructor"<<std::endl;
    }
    void empInfo(){
        company obj;

        std::cout<<empid<<std::endl;
        std::cout<<empsal<<std::endl;

        obj.compInfo();
        //std::cout<<obj.countEmp<<std::endl;
        //std::cout<<obj.name<<std::endl;

    }
};
int main(){
    employee *emp=new employee();
    emp->empInfo();
    return 0;
}