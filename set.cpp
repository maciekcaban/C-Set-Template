#include "set.h"
#include <iostream>
using namespace std;

size_t Set<class T>::size() {

    return size_set;
}

//?
Set<class T> ::Node*  Set<class T>::find_max()
{
    current = root;
            
    while (current->right != nullptr)
    {
          Node* next = current->right;
                
          current = next;
    }
    return current;
}

Set<class T>::Set()
{
      root = nullptr;
      size_set = 0;
      current = nullptr;
}

Set<class T> ::Node* Set<class T>::find_first()
{
    current = root;

    return current;
}

//?
Set<class T> ::Node* Set<class T>::find_min()
{
    current = root;

    while (current->left != nullptr)
    {
        Node* next = current->left;

        current = next;
    }
    return current;
}

bool Set<class T>::empty() {
    if (this->size_set == 0)
    {
        //cout << "it is empty" << endl;
        return true;
    }
    else
    {
        //cout << "it is NOT empty" << endl;
        return false;
    }
}

//?
void Set<class T>::clear_set_2(Node* cur2)
{
    if (cur2->left != nullptr) clear_set_2(cur2->left);

    if (cur2->right != nullptr) clear_set_2(cur2->right);


    if (cur2->parent != nullptr)
    {
        if (cur2->data < cur2->parent->data)
        {
            cur2->parent->left = nullptr;
        }
        else
        {
            cur2->parent->right = nullptr;
        }

        //cout << "deleted" << cur2->data << endl;
        delete cur2;
        size_set--;
    }
}

void Set<class T>::clear_set()
{
    if (size_set == 0)
        return;

    Node* cur = root;

    clear_set_2(cur);
    //usunac korzen

    delete root;
    root = nullptr;
    current = nullptr;
    size_set--;
}