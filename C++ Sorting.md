# **Sorting**

---

---

# **Insertion Sort**

---

- Time Complexity: `O(n**2)`

```cpp
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
```

---

---

# **Selection Sort**

---

- Time Complexity: O(n2)
- Space Complexity: O(1)

---

```cpp
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
void selection(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                // swap(arr[i], arr[j]);  //Built in Function
                swapping(arr[i], arr[j]); //User Defined Function
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

    selection(arr, size);
}
```

---

# **Bubble Sort**

---

- Time Complexity: `O(n**2)`

```cpp
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
```

---

# **Merge Sort | Best Sorting Algorithm**

---

- Time Complexity: `O(n log n)`
