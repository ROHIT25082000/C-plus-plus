#include<iostream>
#include<vector>
#include<string>

class Person
{
private:
    int age;
    std::string name;
public:
    Person(int age,std::string name)
        : age{age}, name{name}{
        } 
    void method(){ std::cout << "\n " << "Age :"<< age << " Name : " << name << std::endl; } 

};

int main()
{
    int number;
    std::cout << "Enter the number of Persons :";
    std::cin >> number;
    std::vector<Person *> myvector;
    Person *p;
    for(int i =0 ;i < number ;i++)
    {
        std::string name;
        int age;
        std::cout << "Enter the age :" << std::endl;
        std::cin >> age;
        std::cout << "Enter the name :" << std::endl;
        std::cin >> name;
        p = new Person(age,name);
        myvector.push_back(p);
    }
    for(auto ir = myvector.begin(); ir!=myvector.end(); ir++)
    {
        (*ir)->method();
    }
}