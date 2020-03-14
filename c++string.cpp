#include<iostream>
#include<sstream>
#include<string>

using namespace std;

string my_concat(const string& a, const string& b);

int main()
{
    string s1;
    string s2;
    string input;
    cout << "Enter the strings\n";
    cout << "Enter the first string:";
    getline(cin,input);
    stringstream(input)>>s1;
    cout << "Enter the second string:";
    getline(cin,input);
    stringstream(input)>>s2;
    string result = my_concat(s1,s2);
    cout << "The concatinated string is the following:\n";
    cout << result;
}

string my_concat(const string& a, const string& b)
{
    return a+" "+b;
}