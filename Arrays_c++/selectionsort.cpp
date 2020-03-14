#include<iostream>
#include<string>
#include<sstream>

using namespace std;

void selectionSort(int arr[],int n);

int main()
{
    int arr[] = {12,45,2,5,34,235,134,12,123};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << "Sorted output :\n";
    selectionSort(arr,len);
    for(int i=0;i<len;++i)
    {       
        cout << arr[i] <<" ";
    }
}

void selectionSort(int arr[],int len)
{
    int i;
    int j;
    int min;
    for(i=0;i<len-1;i++)
    {
        min = i;
        for(j = i+1;j<len;j++)
        {
            if(arr[min] > arr[j])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
