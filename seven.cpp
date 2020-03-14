#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    string input;
    int n1,n2;
    cout << "Enter the two numbers:";
    getline(cin,input);
    stringstream(input) >> n1 >> n2;
    cout << "Difference " << n1 - n2;
}