#include<string>
#include<iostream>  

using namespace std;

int main()
{
    string mystr;
    cout << "Enter the string :";
    cin >> mystr;
    
    string to_find;
    cout << "Enter the char to find :"<< std::endl;
    cin >> to_find;
    cout << "found at "<< mystr.find(to_find) << std::endl;
}


