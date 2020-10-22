#include <iostream>
using namespace std;
void insertion(int arr[], int size)
{
    int i, j, curElement;
    for (i = 0; i < size; i++)
    {
        curElement = arr[i]; // current indexed element
        j = i - 1;           // previous index

        while (j >= 0 && arr[j] > curElement)
        {
            arr[j + 1] = arr[j]; //larger element to next index
            j--;
        }
        arr[j + 1] = curElement; //insert the element in appropriate prosition
    }

    for (i = 0; i < size; i++)
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

    insertion(arr, size);
}