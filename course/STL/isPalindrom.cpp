#include<iostream>
#include<deque>
#include<vector>
#include<string>

using namespace std;

bool isPalindrome(std::string name);

int main()
{
    string name;
    cout << "Enter the string to check :" << endl;
    cin >> name;
    if(isPalindrome(name)==1)
    {
        cout << "Yes " << name << " is a palindrome " << endl;
    }
    else
    {
        cout << "No  " << name << " is not a palindrome " << endl;
    }
}


bool isPalindrome(std::string name)
{
    deque<char> mydec;
    if(name.size() == 1)
        return true;
    for(int i =0 ; i < name.size(); i++)
    {
        mydec.push_back(name[i]);
    }
    while(!mydec.empty())
    {
        if(mydec.front() == mydec.back())
        {
            mydec.pop_back();
            mydec.pop_front();
        }
        else
        {
            return false;
        }
        if (mydec.size() == 1)
        {
            return true;
        }       
    }
    return true;
}