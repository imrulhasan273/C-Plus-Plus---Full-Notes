# C++ Note

---

# **Basic**

---

```cpp
#include<stdio.h>
int main()
{
    int i=1,j=10;
    int k,p;
    k=i++;
    p=++j;
    printf("Value of i is = %d\n",i);
    printf("Value of k is = %d\n",k);
    printf("Value of j is = %d\n",j);
    printf("Value of p is = %d\n",p);
    return 0;
}
```

```cpp
#include<stdio.h>
int main()
{
    int i=1,j;
    j=i+++i;
    printf("%d\n",j);
    printf("%d",i);
    return 0;
}
```

```cpp
#include<stdio.h>
int main()
{
    int i,j=10;
    i=j+++j;
    printf("value of i is =%d\nvalue of j is = %d",i,j);
    return 0;
}
```

## Example [Calculator]

```cpp
#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int prod(int a,int b);
float div(int a,int b);

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int result;
    result=add(m,n);
    printf("the result of addition is = %d\n",result);
    result=sub(m,n);
    printf("the reuslt of subtraction is = %d\n",result);
    result=prod(m,n);
    printf("the reuslt of production is = %d\n",result);
    float res;
    res=div(m,n);
    printf("the reuslt of division is = %0.3f\n",res);
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int prod(int a,int b)
{
    return a*b;
}

float div(int a,int b)
{
    if(b!=0)
    {
        return (float)a/b;
    }
    else
    {
        printf("Math Error\n");
        return -1;
    }
}
```

---

# **Array**

---

## Example 1 [1D]

```cpp
#include<stdio.h>
int main()
{

    int array[5];
    /*
    1. type of array is integer
    2. max size of array is 5 and it can hold upto 5 variables
    3. memory used by this array = max_size*type_of_array
                                 = 5*4 = 20 Byte
    4. lower bound of this array is =0
    5. Upper bound of this array is = size-1 = 5-1 = 4
    */
    int i; // i is the index of the array

    /* to traverse 1 dimensional array you need 1 loop */
    /******* taking input to an array ******/
    for(i=0;i<5;i++) // <5 cause array index upper bound is limited to 4
    {
        scanf("%d", &array[i]); // array[0] = value1,array[1]=value2
    }
    /******* retriving output from an array *****/
    for(i=0;i<5;i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}
```

## Example 2 [1D]

```cpp
// write program that will find out whether an array
//odd dominating or even dominating ?
// if sum of the even numbers is greater
//than syum of the odd numbers then the array is even dominating
#include<stdio.h>
int main()
{
    int size=0;
    printf("How many elements do you want? = ");
    scanf("%d",&size);

    int array[size];
    int even_sum=0,odd_sum=0,i;

    /**** taking input *****/
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]%2==0)
        {
            even_sum=even_sum+array[i];
        }
        else
        {
            odd_sum=odd_sum+array[i];
        }
    }
    // decision making
    if(even_sum>odd_sum)
        printf("This array is even dominating");
    else if(odd_sum>even_sum)
        printf("This array is odd dominating");
    else
        printf("This array is neutral");

    return 0;
}
```

## Example 3 [2D]

```cpp
#include<stdio.h>
int main()
{
    int row, col;
    printf("Number of rows :");
    scanf("%d",&row);
    printf("Number of cols :");
    scanf("%d",&col);

    int array[row][col];
    int i,j;

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

}
```

## Example 4 [2D]

```cpp
#include<stdio.h>
int main()
{
    int M1[2][2]={10,20,30,40};
    int M2[2][2]={10,20,30,40};
    int result[2][2];
    int sum=0,i,j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            result[i][j] = M1[i][j]+M2[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

## Example 5 [2D]

```cpp
#include<stdio.h>
int main()
{
    int iden[3][3]={1 , 0, 0,
                    0 , 1, 0,
                    0 , 0, 1};

    int i,j,flag=0,counter=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i!=j && iden[i][j]!=0)
            {
                flag=1;
                break;
            }
            if(i==j && iden[i][j]==1)
            {
                counter++;
            }

        }
    }
    if(counter==3 && flag==0)
        printf("Identity");
    else
        printf("Not");
    return 0;
}
```

---

---

# **String**

---

## length of a String Without using `strlen` function

```cpp
#include <iostream>
using namespace std;
int my_strlen(char str[])
{
    int length = 0, i = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}
int main()
{
    char str[100];
    gets(str);
    cout << "Length of the string is = " << my_strlen(str);
}
```

## length of a String using `strlen` function

```cpp
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[100];
    gets(str);
    printf("Length of the string is = %d", strlen(str));
}
```

---

# `strcpy` without built in function

```cpp
#include <iostream>
using namespace std;
void my_strcpy(char str1[], char str2[])
{
    int i;
    for (i = 0; str2[i] != '\0'; i++)
    {
        str1[i] = str2[i];
    }
    str1[i] = '\0';
}

int main()
{
    char str1[100], str2[100];
    gets(str1);
    gets(str2);
    my_strcpy(str1, str2);
    puts(str1);
    puts(str2);

    return 0;
}
```

# `strcpy` built in function

```cpp
#include <iostream>
using namespace std;
#include <string.h>
int main()
{
    char str1[100], str2[100];
    gets(str1);
    gets(str2);
    strcpy(str1, str2); // strcpy(destination,source)
    puts(str1);
    puts(str2);

    return 0;
}
```

---

## `strcat` function without build in

```cpp
#include <iostream>
using namespace std;
void my_strcat(char str1[], char str2[])
{
    int i = 0, j;
    for (i = strlen(str1), j = 0; str2[j] != '\0'; j++, i++)
    {
        str1[i] = str2[j]; // str1[5]=str2[0]
    }
    str1[i] = '\0';
}
int main()
{
    char str1[100], str2[100];
    gets(str1);
    gets(str2);
    my_strcat(str1, str2);
    puts(str1);
    puts(str2);

    return 0;
}
```

## `strcat` build function

```cpp
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[100], str2[100];
    gets(str1);
    gets(str2);
    strcat(str1, str2); // strcat(destination,source)
    puts(str1);
    puts(str2);

    return 0;
}
```

---

## String Reverse with the help of a temporary variable

```cpp
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[100], temp;
    gets(str1);
    int i, j;
    for (i = 0, j = strlen(str1) - 1; i < strlen(str1) / 2; i++, j--)
    {
        temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
    }
    puts(str1);

    return 0;
}
```

## String Reverse without temporary variable

```cpp
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[100];
    gets(str1);
    int i, j;
    for (i = 0, j = strlen(str1) - 1; i < strlen(str1) / 2; i++, j--)
    {
        str1[i] = str1[i] ^ str1[j];
        str1[j] = str1[i] ^ str1[j];
        str1[i] = str1[i] ^ str1[j];
    }
    puts(str1);

    return 0;
}
```

---

## Swap String

```cpp
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[100], str2[100], temp[100];
    gets(str1);
    gets(str2);
    printf("before swapping\n");
    puts(str1);
    puts(str2);

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

    printf("after swapping\n");
    puts(str1);
    puts(str2);

    return 0;
}
```

---

## Palindrome

```cpp
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    char str[100];
    gets(str);
    int i, j, flag = 0;
    for (i = 0, j = strlen(str) - 1; i < strlen(str) / 2; i++, j--)
    {
        if (str[i] != str[j])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Palindrome");
    else
        printf("Not palindrome");
}
```

---

## Number of Vowels

```cpp
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[100];
    gets(a);
    int counter = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O'
        || a[i] == 'U' || a[i] == 'a' || a[i] == 'e' || a[i] == 'i'
        || a[i] == 'o' || a[i] == 'u')
        {
            counter++;
        }
    }

    cout << counter;
    return 0;
}
```

---

## Longest word in a string

```cpp
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[50], b[20], c[20];
    int i, j = 0, l = 0;
    cout << "Enter a string:" << endl;
    gets(a);
    for (i = 0; i <= strlen(a); i++)
    {
        if (a[i] != 32 && a[i] != '\0')
            b[j++] = a[i];
        else
        {
            b[j] = '\0';
            if (strlen(b) > l)
            {
                strcpy(c, b);
                l = strlen(b);
            }
            j = 0;
        }
    }
    cout << "The longest word is:";
    puts(c);

    return 0;
}
```

---

## Number of occurrences of a word in a string

```cpp
#include <iostream>
#include <string.h>
using namespace std;
#define MAX_SIZE 100 //Maximum size of string
/* Function declaration */
int countOccurrences(char *string, char *toSearch);
int main()
{
    char string[MAX_SIZE];
    char toSearch[MAX_SIZE];
    int occurrences;
    /*
     * Reads string and word to be searched from user
     */
    cout << "Enter any string: ";
    gets(string);
    cout << "Enter word to search occurrences: ";
    gets(toSearch);

    occurrences = countOccurrences(string, toSearch);

    cout << "Total occurrences of " << toSearch << ": " << occurrences;

    return 0;
}
/**
 * Gets, the total number of occurrences of a word in a string
 */
int countOccurrences(char *string, char *toSearch)
{
    int i, j, found, occurrences;
    int stringLen, searchLen;

    stringLen = strlen(string);   //Gets, length of string
    searchLen = strlen(toSearch); //Gets, length of word to be searched

    occurrences = 0;

    for (i = 0; i <= stringLen; i++)
    {
        /*
         * Matches the word with string
         */
        found = 1;
        for (j = 0; j < searchLen; j++)
        {
            if (string[i + j] != toSearch[j])
            {
                found = 0;
                break;
            }
        }

        if (found == 1)
        {
            occurrences++;
        }
    }

    return occurrences;
}
```

---

---

# **Pointer**

---

## Example 1

```cpp
#include <iostream>
using namespace std;
int main()
{
    int i, *p;
    i = 2;
    p = &i;                                   // i points to the address of p
    cout << "value of p is = " << *p << endl; //2
    *p = 5;                                   //*p is value of i
    cout << "value of p is = " << i;          //5

    return 0;
}
```

## Example 2

```cpp
#include <iostream>
using namespace std;
int main()
{
    int i, *p;
    char *c;
    i = 10;
    p = &i;
    cout << "size of a pointer is = " << sizeof(c) << endl;
    cout << "size of a pointer is = " << sizeof(p) << endl;
    cout << "size of the variable type is = " << sizeof(i) << endl;
    cout << "size of the variable type is = " << sizeof(*p) << endl;
    cout << "address of i is = " << i << endl;
    cout << "address of i is = " << p << endl;
    cout << "address of pointer is = " << &p << endl;
    cout << "value of i is = " << i << endl;
    cout << "value of i is = " << *p << endl;
    /******************************************/
    cout << "value of i is = " << *(&i) << endl;
    cout << "value of p is = " << &(*p) << endl; //  invalid

    /******************************************/
    return 0;
}
```

### Output

```cpp
size of a pointer is = 4
size of a pointer is = 4
size of the variable type is = 4
size of the variable type is = 4
address of i is = 10
address of i is = 0x61ff0c
address of pointer is = 0x61ff08
value of i is = 10
value of i is = 10
value of i is = 10
value of p is = 0x61ff0c
```

---

## Call By Value

```cpp
#include <iostream>
using namespace std;
void set(int i)
{
    i = 20;
}
int main()
{
    int i;
    i = 10;
    set(i);
    cout << i;  //10
    return 0;
}
```

---

## Call By Reference

```cpp

#include <iostream>
using namespace std;
void set(int *i)
{
    *i = 20;
}
int main()
{
    int i;
    i = 10;
    set(&i);
    cout << i;
    return 0;
}
```

---

## Example

```cpp
#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    int *p;
    p = &i;
    cout << "prev = " << *p << endl;
    cout << "prev add = " << p << endl;
    *p++;
    (*p)++; //address remain same as it was increment of value not address
    cout << "pres = " << *p << endl;
    cout << "pres add = " << p;

    return 0;
}
```

### Output

```cpp
prev = 10
prev add = 0x61ff08
pres = 1879073279
pres add = 0x61ff0d
```

---

## Chaining Pointer

```cpp
#include <iostream>
using namespace std;
int main()
{
    /********* chainning within pointers *******/
    int *p, **q, ***r;
    int *a;
    int x = 10;
    p = &x;
    a = p;
    cout << "value of x is = " << *p << endl;
    cout << "value of x is = " << *a << endl;
    q = &p;
    cout << "value of x is = " << **q << endl;
    r = &q;
    cout << "value of x is = " << ***r << endl;

    return 0;
}
```

### Output

```cpp
value of x is = 10
value of x is = 10
value of x is = 10
value of x is = 10
```

---

## Example

```cpp
#include <iostream>
using namespace std;
int main()
{
    // variable declaration
    int a[10], *p;
    a[0] = 23;
    a[1] = 32;
    //////////////////////
    p = a;
    for (int i = 5; i < 7; i++)
    {
        cout << *p << endl;
        cout << *a << endl;
        p++;
    }

    return 0;
}
```

### Output

```cpp
23
23
32
23
```

---

## Swapping Using Pointer and Call By reference

```cpp
// swapping two variables using call by reference
#include <iostream>
using namespace std;
void swap(int *p, int *q) // p = &i , q = &j
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int i = 10, j = 20;
    cout << "Before Swap i = %d, j = " << i << j << endl;
    swap(&i, &j);
    cout << "After Swap i = %d, j = " << i << j << endl;
    return 0;
}
```

### Output

```cpp
Before Swap i = %d, j = 1020
After Swap i = %d, j = 2010
```

---

## Best Swapping

```cpp
#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << " and " << b;

    return 0;
}
```

### Output

```cpp
20 and 10
```

---
