#include<iostream>
#include<string>
#include<array>
#include<algorithm>

using namespace std;

void display(const array<int,10> &arr)
{
    cout << "[ ";
    for(auto i = arr.begin(); i!= arr.end(); i++)
    {
        cout << *i << " ";
    }
    cout << "]";
}


int main()
{
    array<int,10> arr = {10,20,30,40,50,60,70,30,40,100};
    bool issorted = is_sorted(arr.begin(),arr.end());
    cout << issorted << endl;
    cout << "Sorted array";
    for(auto i = arr.begin(); i!= arr.end(); i++){ cout << *i << " ";}
    cout << endl;
    sort(arr.begin(),arr.end());
    for(auto i = arr.begin(); i!= arr.end(); i++){ cout << *i << " ";}
    cout << endl;
    cout << is_sorted(arr.begin(),arr.end());
    cout << endl;
    /*
    for(auto i = arr.begin(); i!= arr.end(); i++){ cout << *i << " ";}
    */
    cout << "Front of the array : " << arr.front() << endl;
    cout << "Rear of the array : " << arr.back() << endl; 
    cout << "Size of the array :" << arr.size() << endl;
    display(arr);

    // disintegrating an array into pointer 
    int * arr1 = arr.data();
    cout << endl;
    cout << "The address of the array :" << arr1 << endl; 
    for(int i =0 ; i < arr.size(); i++)
    {
        cout << arr1[i] << " ";
    }


}

