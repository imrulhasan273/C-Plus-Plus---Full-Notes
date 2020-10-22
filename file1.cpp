#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A is creating" << endl;
    }
    ~A()
    {
        cout << "A is destroying" << endl;
    }
};
class B : public A
{
public:
    B()
    {
        cout << "B is creating" << endl;
    }
    ~B()
    {
        cout << "B is destroying" << endl;
    }
};

class C : public A
{
public:
    C()
    {
        cout << "C is creating" << endl;
    }
    ~C()
    {
        cout << "C is destroying" << endl;
    }
};

class D : public B, C
{
public:
    D()
    {
        cout << "D is creating" << endl;
    }
    ~D()
    {
        cout << "D is destroying" << endl;
    }
};
int main()
{
    D d;
    return 0;
}
