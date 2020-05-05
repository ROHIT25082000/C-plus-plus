#include<iostream>
#include<string>
#include "header.h"
Stack::Stack(int m)
{
    max = m;
    arr = new int[max];
}
void Stack::push(int num)
{
    if(top < max-1){
        arr[++top] = num;
    }
}

int Stack::pop()
{   
    int x = -1;
    if(top>-1)
    {   
        int x = arr[top--];
        return x;
    }
    return x;
}

int Stack::peek()
{
    if(top != -1)
        return arr[top];
    else 
        return -1;
}
void Stack::clear()
{
    for(int i =0; i < max;i++)
    {
        arr[i] = 0;
    }
}