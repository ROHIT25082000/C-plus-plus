#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    string firstname;
    string lastname;
    string input;
    cout << "Enter the name :\n";
    getline(cin,input);
    stringstream(input)>>firstname>>lastname;
    cout << "First name of the boy :" << firstname << endl;
    cout << "last name of the boy :" << lastname << endl;
    cout << firstname.size();
}