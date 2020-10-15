#include <iostream>
#include <functional>
using namespace std;
void call(int arg, function<void(int)> func)
{
    func(arg);
}
int main()
{
    auto printSquare = [](int x) {
        cout << x * x;
    };
    call(2, printSquare); // "4"
}