#include<iostream>
#include<string>
#include<sstream>

using namespace std;

string reverse(string& str);
int len(const string& str);
void swap(char& a ,char& b);


int main()
{   
    string curr;
    string input;
    getline(cin,input);
    stringstream(input) >> curr;
    string output = reverse(curr);
    cout << output;
    return 0;
}


string reverse(string& str)
{
    int len_string = len(str);
    for(int i=0;i<n/2;i++)
    {
        
    }
}

int len(const string& str);
void swap(char& a ,char& b);
