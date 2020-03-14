#include<iostream>
#include<string>
#include<sstream>

using namespace std;

void insertion(int arr[],int len);

int main()
{
    int arr[] = {12,45,2,5,34,235,134,12,123};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << "Sorted output :\n";
    insertion(arr,len);
    for(int i=0;i<len;++i)
    {       
        cout << arr[i] <<" ";
    }
}

void insertion(int arr[],int len)
{
    for(int i = 1;i<len;i++)
    {
        int j = i-1;
        int swap = arr[i];
        while(arr[j] > swap && j >=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = swap;
    }
}



