#include<iostream>
#include<string> 

using namespace std;

void print_array(const int arr[] , size_t n);
void set_array(int arr[], size_t n, int key);

int main(){
    int arr [] = {12,23,45,56,76,8,12,31};
    size_t n = sizeof(arr)/sizeof(*arr);
    cout << "The array is the following\n";
    print_array(arr, n);
    cout << endl;
    int key;
    cout << endl << "Enter the value you want to set the array: ";
    cin >> key;
    set_array(arr, n ,key);
    cout << "After the setting of the values :" << endl;
    print_array(arr,n); 
}

void print_array(const int arr[], size_t n){
    cout << "Array :";
    for(size_t i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
}
void set_array(int arr[] ,size_t n, int key){
    cout << "The modification "<< endl;
    for(size_t i = 0 ; i < n; i++){
        arr[i] =key;
    }
}