
#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Stack {
public:
    typedef T value_type;
    vector <value_type> a;
    Stack(const T& t = T());

    bool isEmpty() 
    {
        if (a.size() == 0) {
            return true;
        }
        return false;
    }
    value_type Top() throw out_of_range()
    {
        if (a.size() != 0)
        {
            return a.back();
        }
        else
        {
            throw out_of_range("Index out of range!");
        }
    }
    void Push(value_type element) 
    {
        a.push_back(element);
    }
    void Pop() 
    {
        a.pop_back();
    }
};

template <class T>
Stack<T>::Stack(const T& t)
{
    a.push_back(t);
}

int main() 
{
    Stack<string> a("programming");
    a.Pop();
    cout << a.Top() << endl;
    a.Push("top");
    cout << a.Top() << endl;
    a.Pop();
    cout << a.Top() << endl;
    return 0;
}