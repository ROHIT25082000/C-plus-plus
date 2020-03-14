#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    int n1,n2;
    cout << "Enter the numbers kidzs ::";
    string input;
    getline(cin,input);
    stringstream(input)>>n1>>n2;
    cout << "sum " << " = "<< n1 + n2;
    
}