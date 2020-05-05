#include<iostream>
#include<string>
#include<vector>
using namespace std; 

int *multiply(int *arr1,int size1,int *arr2,int size2);

void print_array(const int *arr, int size);

int *scan(int *arr, int size);

int main()
{
    int *arr1,*arr2;
    int size1,size2;
    cout << "Enter the size of arr1 :"<<endl;
    cin >> size1;
    arr1 = scan(arr1,size1);
    cout << endl;
    print_array(arr1,size1);
    
    cout << "Enter the size of arr2 :"<<endl;
    cin >> size2;
    arr2 = scan(arr2,size2);
    cout << endl;
    print_array(arr2,size2);

    int *result = multiply(arr1,size1,arr2,size2);
    cout << "After the function " << endl;
    print_array(result,size1*size2);

}


int *multiply(int *arr1,int size1,int *arr2,int size2)
{
    int k = 0;
    int new_size = size1*size2;
    int *res = new int[new_size];
    for(int i =0; i < size1; i++){
        for(int j = 0 ; j < size2; j++){
            res[k] = arr1[i]*arr2[j];
            k++;
        }
    }
    return res;
}

void print_array(const int *arr, int size)
{   
    for(int i =0 ; i < size ; i++ ){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

int *scan(int *arr, int size)
{
    arr = new int[size];
    cout << "Enter the value for the arr of size "<< size << endl;
    for(int i =0 ; i< size; i++){
        cin >> arr[i];
    }
    return arr;
}