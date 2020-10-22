#include <iostream>
using namespace std;
class A
{
private:
    int i;

public:
    A()
    {
        cout << "class A is constructing" << endl;
        // set(30);
    }
    ~A()
    {
        cout << "class A is destructing" << endl;
    }
    friend void test(A &a);
    friend void set(int i);
};
void set(int i)
{
    cout << "Friend function is calling" << endl;
}

void test(A &a)
{
    a.i = 20;
    cout << a.i << endl;
    /***
        test function can use the private variable of class
        A cause this is a friend func of class A.
    ***/
}
int main()
{
    A a;
    set(2);
    test(a);
    cout << a.i << endl;
    /***
    ERROR!!!. cause main function is not a friend function of the class A
    So main func can not use private variable of class A
    ***/

    return 0;
}
