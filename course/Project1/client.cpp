#include<iostream>
#include<string>
#include<vector>
#include "header.h"

void Employee::setAge(int n)
{
    age = n;
}
void Employee::setName(std::string str)
{
    name = str;
}
void Employee::setQual(std::string qual)
{
    qualification = qual;
}
int Employee::get_Age()
{
    return age;
}
std::string Employee::get_name()
{
    return name;
}
std::string Employee::get_qual()
{
    return qualification;
}