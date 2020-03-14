#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number for it's table";
    cin >> n;
    for(int i=1;i<=10;i++)
    {
        cout << n <<" x "<<i<<" = "<<i*n<<"\n";
    }
}