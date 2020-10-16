#include <iostream>
using namespace std;
class test
{
    int roll;
    float per;

public:
    void getdata(int, float); //inside
    void putdata(void)        //outside
    {
        cout << "roll =" << roll;
        cout << "per =" << per;
    }
};
void test::getdata(int x, float y)
{
    roll = x;
    per = y;
}
int main()
{
    test t;
    t.getdata(101, 80.3);

    return 0;
}