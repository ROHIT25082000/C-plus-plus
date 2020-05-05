#include<iostream>


int doubleit(int &&x);



int main()
{
    int x = 12;
    std:: cout << doubleit(25) << std::endl;
}

int doubleit(int &&x)
{
    return x*2;
}