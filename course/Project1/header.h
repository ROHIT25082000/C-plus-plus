#include<iostream>
#include<string>

class Employee
{
    
private:
    int age;
    std::string name;
    std::string qualification;
public:
    void setAge(int a);
    void setName(std::string n);
    void setQual(std::string q); 
    int get_Age();
    std::string get_name();
    std::string get_qual();    
};

