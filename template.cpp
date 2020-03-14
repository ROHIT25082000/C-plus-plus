#include<iostream>
#include<string>
#include<sstream>

using namespace std;

template <class T>
T sum (T a,T b)
{
    return a+b;
}
int main()
{
    int n1,n2;
    n1 = 3;
    n2 = 4;
    int p = sum<int>(n1,n2);
    cout << p << endl;
}

