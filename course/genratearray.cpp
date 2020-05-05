#include<iostream>
#include<string>

using namespace std;

int *create_array(size_t n, int value = 0);
void display(const int *arr,int count);

int main()
{
    int count;
    int default_value;
    cout << "Enter the number of integers :";
    cin >> count;
    cout << "Enter the default value :";
    cin >> default_value;
    int *arr = create_array(count,default_value);
    cout << "---------------------------------" << endl;
    display(arr,count);
}

int *create_array(size_t n, int value)
{
    int *arr = new int[n];
    for(int i = 0; i < n ; i++){
        arr[i] = value;
    }
    return arr;
}

void display(const int*arr ,int count){
    for(int i =0 ; i < count ; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}