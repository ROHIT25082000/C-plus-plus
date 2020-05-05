#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

void square(int &a)
{
    a = a*a;

}
void cube(int &a)
{    a = a*a*a;}
int main()
{
    int key;
    std::vector<int> myvec = {1,2,3,4,5,6,7,8,9,10};
    
    for(auto i = myvec.begin(); i!= myvec.end();i++)
    {
        std::cout << *i << " ";
    }

    std::for_each(myvec.begin(),myvec.end(),cube);
    std::cout << std::endl;
    auto j = myvec.begin();
    while(j!=myvec.end())
    {
        std::cout << *j << " ";
        j++;
    }
    std::cout << std::endl;
    std::for_each(myvec.begin(),myvec.end(),[](int x){ std::cout << x*x << " ";});
}