#include<string>
#include<cctype>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    for(auto x = vec.begin(); x!=vec.end(); x++)
    {
        cout << *x << " ";
    }
    cout << endl;
    for(auto x = vec.rbegin(); x!=vec.rend(); x++)
    {
        cout << *x << " ";
    }

    auto x =  std::count_if(vec.begin(),vec.end(),[](int x){ return x %2 == 1;});
    cout << endl << "The number "<< x;
    vector<int> vec1 = {9,98,7,6,5,4,3,2};
    cout << "The sorted vector";
    std::sort(vec1.begin(),vec1.end());
    for(auto x = vec1.begin(); x!= vec1.end(); x++)
    {
        cout << *x << " "; 
    }


}
