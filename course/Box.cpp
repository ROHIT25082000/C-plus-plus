#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Box
{
    public:
        int length;
        int breadth;
        int height;
        int volume()
        {
            return length*breadth*height;
        }
};

int main()
{
    Box mybox;
    cout << "Enter length :" << endl;
    cin >> mybox.length;
    cout << "Enter breadth : " <<endl;
    cin >> mybox.breadth;
    cout << "Enter height :"<< endl;
    cin >> mybox.height;
    cout << "The volume of the box is : " << mybox.volume() << endl;
    
} 