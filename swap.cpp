#include<iostream>
#include<sstream>
#include<string>

using namespace std;

void swap(int& a,int& b);

int main()
{
    int a,b;
    string input;
    cout << "Enter the numbers :";
    getline(cin,input);
    stringstream(input) >> a >>b;
    cout << "a :" << a <<" b:"<< b <<endl;
    cout << "After swapping \n";
    swap(a,b);
    cout << "a :" << a <<" b:"<< b <<endl;

}   

void swap(int&a ,int&b)
{
    int temp = a;
    a = b;
    b = temp;
}
