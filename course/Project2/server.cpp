#include<iostream>
#include<string>
#include"header.h"


Student::Student(std::string n , int a, std::string c)
{
    name = n;
    age = a;
    course = c;
}

void Student::get_details()
{
    std::cout << "Name :" << name << std::endl;
    std::cout << "Age :" << age << std::endl;
    std::cout << "Course :" << course << std::endl;
}