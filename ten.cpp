// print 1 to n even numbers
#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the n:";
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            cout << i << " ";
        }
    }
}


