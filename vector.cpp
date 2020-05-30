#include<iostream>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;

int main()
{
    vector<int>v2 = {12,34,45,65,7,67};
    cout << v2.size() << " is the size of v2" << endl;
    auto it = find(v2.begin(),v2.end(),45);
    //v2.insert(it ,23);
    for(auto i = v2.begin(); i!=v2.end(); i++)
    {
        cout << *i << " ";
    }
    v2.erase(it);
    cout << endl;
    for(auto i = v2.begin(); i!=v2.end(); i++)
    {
        cout << *i << " ";
    }
    it = find(v2.begin(),v2.end(),65);
    v2.insert(it ,23);
    cout << endl;
    for(auto i = v2.begin(); i!=v2.end(); i++)
    {
        cout << *i << " ";
    }
}
