#include<iostream>
#include"list.h"

int main()
{
    std::cout << "1.insert : "<<std::endl;
    std::cout << "2.display : "<< std::endl;
    LinkedList *mylist = new LinkedList();
    while(1)
    {
        int x;
        std::cout << "Enter your choice :"<<std::endl;
        std::cin >> x;
        switch(x)
        {
            case 1:
                int n;
                std::cout << "Enter the value to insert :" << std::endl; 
                std::cin >> n;
                mylist->insert(n);
                break;
            case 2:
                mylist->display();
                std::cout << std::endl;
                break;
        } 
    }
}