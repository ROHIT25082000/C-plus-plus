// program to implement bubblesort 
#include<iostream>
#include<sstream>
#include<string>

using namespace std;

void bubbleSort(int arr[],int len);

int main()
{
    int arr[] = {12,34,3,24,45,234,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,len);
    for(int i=0;i<len;i++)
    {
        cout << arr[i] <<" ";
    }
}

void bubbleSort(int arr[],int len)
{
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-1-i;j++)
        {
            if(arr[j] >  arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

