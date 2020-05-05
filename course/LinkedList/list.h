#include<iostream>
#include<string>

class Node
{
public:
    int value;
    Node *link;
};

class LinkedList 
{
private:
    Node *head = nullptr;
public:
    void insert(int num);
    void display();
};



