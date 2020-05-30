#include<iostream>
#include<string>
#include<array>


using namespace std;

int main()
{
    std::array <int, 10> arr = {12,34,45,56,67,78,453,45};
    cout << arr.size();
    cout << arr.at(0);
    cout << arr.front();
    cout << arr.back();
    if (!arr.empty())
    {
        cout << "The array is not empty !";
    }
    arr.fill(12);
    for(auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << endl;
    }
    int * regular_array = arr.data();
    for(int i = 0; i < arr.size(); i++)
    {
        cout << regular_array[i] << " ";
    }
}