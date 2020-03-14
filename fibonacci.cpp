#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int fibo(int n);

int main()
{
    int n;
    string input;
    cout << "Enter the number of terms :"<<endl;
    getline(cin,input);
    stringstream(input) >> n;
    for(int i=1;i<=n;i++)
        cout << fibo(i)<< " ";
    return 0;
}

int fibo(int n)
{
    if(n==1)
        return 0;
    else if (n==2)
        return 1;
    else 
        return fibo(n-1) + fibo(n-2);
}

