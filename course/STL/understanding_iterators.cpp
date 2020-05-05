#include<iostream>
#include<string>
#include<vector>

struct Person
{
    std::string name;
    int age;
};
typedef struct Person Person;

int main()
{
    int num;
    std::cout << "Enter the number of Person :" << std::endl;
    std::cin >> num;
    std::vector<Person> *my_person_vec = new std::vector<Person>;
    for(int i =0 ; i < num; i++)
    {
        Person * temp = new Person;
        std::cout << "Enter the name :" << std::endl;
        std::cin >> temp->name; 
        std::cout << "Enter the age :" << std::endl;
        std::cin >> temp->age;
        my_person_vec->push_back(*temp);
    }

    std::cout << "The total number of the members = " << my_person_vec->size();
    for(auto i = my_person_vec->begin(); my_person_vec->end()!=i ; i++)
    {
        std::cout << "--------------------------------"<<std::endl;
        std::cout <<  i->name << std::endl;
        std::cout << i->age << std::endl;
        std::cout << "--------------------------------"<<std::endl;
    }
}



