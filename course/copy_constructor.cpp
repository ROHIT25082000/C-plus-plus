#include<iostream>

using namespace std;

class Boy
{
private:
    string name;
    int age;
    string gender;
public:
    Boy(string nam,int ae, string gend);
    Boy(const Boy &myboy);
    void display();
};


Boy::Boy(string name,int ae,string gend)
    :name{name},age{ae},gender{gend}{
}
Boy::Boy(const Boy &myboy)
    :name{myboy.name},age{myboy.age},gender{myboy.gender}{
    cout << "Copy constructor called " << endl;
}
void Boy::display()
{
    cout << "Name :" << name << endl;
    cout << "Age  :" << age << endl;
    cout << "Gender:"<< gender << endl;
}


// a simple function 

void display(Boy small_boy);

int main()
{   
    Boy my = Boy("Rohit",18,"Male");
    cout << "Using class display function " << endl;
    my.display();
    
    display(my);
}

void display(Boy small_boy)
{   
    cout << "Using the outer function "<< endl;
    small_boy.display();
}









