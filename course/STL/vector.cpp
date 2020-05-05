#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<int> *myvec = new vector<int>; 
    myvec->push_back(1);
    myvec->push_back(2);
    myvec->push_back(3);
    myvec->push_back(4);
    auto it1 = myvec->begin();
     std::cout << "[ ";
    while(it1!=myvec->end())
    {
        std::cout << *it1 << " ";
        it1++;
    }
    std::cout << "]" << endl;

    for(auto it2 = myvec->begin();it2!=myvec->end(); it2++)
    {
        std::cout << *it2 << " ";
    }
}

