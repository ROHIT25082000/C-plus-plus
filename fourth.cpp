// Write a program to take two numbers from the users 
// and print the sum of the two numbers
#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    int n1,n2;
    cout << "Hello user please enter the two numbers \n";
    string curr_string;
    getline(cin,curr_string);
    stringstream(curr_string)>> n1 >> n2;
    cout << "sum is =" << n1+n2 <<"\n bye !";
}