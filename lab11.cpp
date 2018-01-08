
#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;


template<class T>
class Stack 
{
public:

    bool isEmpty() const;
    void push(const T& item);
    const T& top() const
    {
        if (isEmpty())
        {
            throw "Stiva este goala!\n";
        }
        return v.back();
    }

    void pop();
    vector <T> v;
};

template<class T>
bool Stack<T>::isEmpty() const
{
    return v.empty();
}

template<class T>
void Stack<T>::push(const T& item)
{
    v.push_back(item);
}

template<class T>
void Stack<T>::pop()
{
    if (isEmpty())
    {
        throw "Stiva este goala!\n";
    }
    v.pop_back();
}

