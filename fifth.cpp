#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    int n1,n2;
    string input;
    cout << "Enter the numbers to be multipled";
    getline(cin,input);
    stringstream(input)>> n1>>n2;
    cout << "The product of the numbers :"<< n1*n2 << "\n bye";
}
