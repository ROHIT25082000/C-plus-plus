#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    
    vector<int>vec;
    int number;
    cout << "Enter number upto which you want :";
    cin >> number;
    vec.push_back(0);
    vec.push_back(1);
    int element;
    for(int i = 2; i < number; i++){
        element = vec.at(i-1) + vec.at(i-2);
        vec.push_back(element);
    }
    for(int i = 0; i < vec.size(); i++){
        cout << vec.at(i) << " ";
    }
}
