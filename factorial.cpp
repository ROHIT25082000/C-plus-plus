#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int factorial(int a);


int main()
{
    int n;
    cout << "Enter the number :";
    cin >> n;
    int result = factorial(n);
    cout << "The result of the factorail is :"
    << result<<endl;
}

int factorial(int n)
{
    if(n==1)
        return 1;
    else if(n==0)
        return 1;
    else 
        return n * factorial(n-1);
}
