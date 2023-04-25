#ifndef set_h
#define set_h

#include <iostream>
#include <typeinfo>
using namespace std;

template< class T >
class Set
{
public:
    struct Node {
    public:
        T data;
        Node* left;
        Node* right;
        Node* parent;
    };
    Node* root;
    Node* current;
    size_t size_set;

    class const_iterator
    {
    public:
        Node* p;
        Set* b;
        const_iterator(Node* p, Set* b);
        const T& operator * ()const;
        const T* operator->() const;
        bool operator!= (const const_iterator& it) const noexcept;
        const_iterator& operator++ () noexcept;
    };

    class iterator : public const_iterator
    {
    public:
        iterator(Node* p, Set* b);
        T& operator * ()const;
        iterator& operator++();
    };

    Set();
    size_t size();                                      
    Node* findMax();                                   
    Node* findFirst(); 
    Node* findMin();   
    bool empty();                                   //zwraca true jezeli jest pusty
    void clear_set_2(Node* cur2);       
    void clearSet();       
    ~Set();     
    void push_2(const T& value_to_add, Node* curr);
    void push(const T& value_to_add);
    bool ifSetConstainsElement(const T& value_to_find);      //sprawdza czy wskazany element znajduje sie w secie
    void connectingSets(Set& S1, Set& S2);          //C=A+B
    void display();
    bool operator==(Set& S1);
    bool operator>(Set& S1);
    bool operator<(Set& S1);
    void commonPartOfSets(Set& S1, Set& S2);     //C= czesc wspolna A i B
    void differenceOfSets(Set& S1, Set& S2);      //C=A-B

    const_iterator end()const noexcept;
    iterator end();
    iterator begin();
    const_iterator begin()const noexcept;
};


#include "set.inl"

#endif  