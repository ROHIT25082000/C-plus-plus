#include<iostream>
#include<string>
#include<sstream>

using namespace std;

void pattern(int n);

int main()
{
    int n;
    cout << "Enter the number n:\n";
    cin >> n;
    pattern(n);
    return 0;
}

void pattern(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << "*  ";
        }
        cout << "\n";
    }
}

