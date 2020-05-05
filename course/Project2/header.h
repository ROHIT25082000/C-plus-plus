#include<iostream>
#include<string>

class Student
{
private:
    std::string name;
    int age;
    std::string course;
public:
    Student(std::string n , int a, std::string c);
    void get_details();
};
