#include<iostream>
#include"list.h"

void LinkedList::insert(int num)
{
    Node *new_node = new Node;
    new_node->value = num;
    new_node->link = nullptr;
    if(head==nullptr)
        head = new_node;
    else 
    {
        Node*temp = head;
        while(temp->link!=nullptr)
        {
            temp = temp->link;
        }
        temp->link = new_node;
        new_node->link = nullptr;
    }
}

void LinkedList::display()
{
    Node *temp = head;
    while(temp!=nullptr)
    {
        std::cout << temp->value << " ";
        temp = temp->link;
    }
}

