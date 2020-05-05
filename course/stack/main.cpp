#include<iostream>
#include"header.h"

int main()
{
    int max;
    std::cout << "Enter the max of the stack :";
    std::cin >> max;
    Stack *mystack = new  Stack(max);
    std::cout << "1.push "<<std::endl;
    std::cout << "2.pop " <<std::endl;
    std::cout << "3.peek" <<std::endl;
    std::cout << "4.clear" << std::endl;
    while(1)
    {
        int choice;
        std::cout << "Enter the choice :"  << std::endl;
        std::cin >> choice;
        switch (choice)
        {
        case 1: 
            int n;
            std::cout << "Enter value to push" << std::endl;
            std::cin >> n;
            mystack->push(n);
            break;
        case 2:
           std::cout << "The popped value : " <<  mystack->pop() << std::endl;
           break;
        case 3:
            std::cout << "The peeked value :" << mystack->peek() << std::endl;
            break;
        case 4:
            std::cout << "Cleared up"<< std::endl;
            mystack->clear();
        default:
            std::cout << "Invalid input " << std ::endl;
            break;
        }
    }
}
