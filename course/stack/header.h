#include<iostream>
class Stack
{
private:
    int top = -1;
    int max;
    int *arr;
public:
    Stack(int m);
    void push(int num);
    int pop();
    int peek();
    void clear();
};

