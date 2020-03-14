#include<iostream>
#include<string>
#include<sstream>

using namespace std;

namespace Mynamespace1
{
    int rohit;
    string hello = "I am in Mynamespace1";
}

namespace Mynamespace2
{
    int rohit;
    string hello = "I am in Mynamespace2";
}

int main()
{
    {
        using namespace Mynamespace1;
        cout << hello<<endl;
    }
    cout << Mynamespace2::hello;
}