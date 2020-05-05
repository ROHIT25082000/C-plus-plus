#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec1 = {1, 3, 4, 5, 45, 67, 34, 33 ,42};
    vector<int> vec2 = {100,200};
    auto it = find(vec1.begin(),vec1.end(),67);
    if(it!=vec1.end())
    {
        cout << "Present " << endl;
        vec1.insert(it,vec2.begin(),vec2.end());
        cout << "the vector is " << endl;
        for(auto i = vec1.begin(); i != vec1.end(); i++)
        {
            cout << *i << " ";
        }
        cout << "\n";
    }
    // erasing somethings in the way people like 


    vector<int> myNumbers = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    auto it1 = myNumbers.begin();
    while(it1!=myNumbers.end())
    {
        if(*it1 % 2 == 0)
        {
            myNumbers.erase(it1);
        }
        else{
            it1++;
        }
    }
    cout << "arr" << endl;
    for(auto i = myNumbers.begin(); i != myNumbers.end(); i++){ cout << *i << " ";}



}