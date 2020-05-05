#include<iostream>
#include<string>

template<class T>
void myswap(T &a, T &b);

int main()
{
    int a,b;
    
    std::cout << "Enter the two items :";
    std::cout << "First a = ";
    std::cin >> a;
    std::cout << "Enter b = ";
    std::cin >> b;
    myswap(a,b);

    std::cout << "a =" << a << " b= " << b << std::endl;

}

template<class T>
void myswap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}



