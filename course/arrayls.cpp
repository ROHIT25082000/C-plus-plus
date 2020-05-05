#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int n;
    cout << "Enter the n value :" << endl;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the value :" << endl;
    for(int i = 0; i <n ; i++){
        cin >> arr[i];
    }
    cout << "The array is :" << endl;
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}