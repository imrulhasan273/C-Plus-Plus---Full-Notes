#include <iostream>
#include <algorithm>
using namespace std;
void swapping(int &a, int &b)
{
    //swap the content of a and b
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void bubble(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                // swap(arr[i], arr[j]);  //Built in Function
                swapping(arr[j], arr[j + 1]); //User Defined Function
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Number of Element: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int size = sizeof(arr) / sizeof(arr[0]); // = n

    bubble(arr, size);
}