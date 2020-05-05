#include<iostream>
#include<string>
#include<vector>
#include "header.h"

int main()
{
    Employee emp1;
    emp1.setAge(18);
    emp1.setName("Rohit Vishwakarma");
    emp1.setQual("B.tech CSE");

    std::cout << "Employee name :" << emp1.get_name() << std::endl;
    std::cout << "Employee age :"<< emp1.get_Age() << std::endl;
    std::cout << "Employee Qualification :"<<emp1.get_qual() << std::endl;

    
}