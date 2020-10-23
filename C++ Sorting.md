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
- Space Complexity: `O(n)`

```cpp
#include <iostream>
using namespace std;
// Merge two subarrays L and M into arr
void merge(int arr[], int p, int q, int r)
{

    // Create L ← A[p..q] and M ← A[q+1..r]
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    // Maintain current index of sub-arrays and main array
    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    // Until we reach either end of either L or M, pick larger among
    // elements L and M and place them in the correct position at A[p..r]
    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    // When we run out of elements in either L or M,
    // pick up the remaining elements and put in A[p..r]
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = M[j];
        j++;
        k++;
    }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // m is the point where the array is divided into two subarrays
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Merge the sorted subarrays
        merge(arr, l, m, r);
    }
}

// Print the array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
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

    mergeSort(arr, 0, size - 1);

    cout << "Sorted array: \n";

    printArray(arr, size);
}
```

---
