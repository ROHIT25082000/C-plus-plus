#include<iostream>
#include<string>
#include"header.h"

int main()
{   
    Student *s1 = new Student("Rohit",18,"B.tech");
    Student s2("Riddhi",19,"B.tech");
    s1->get_details();
    s2.get_details();
}
