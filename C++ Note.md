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

## Swapping

```cpp
#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int i = 10, j = 20;
    swap(&i, &j);
    cout << "i = " << i << endl;
    cout << "j = " << j;
    return 0;
}
```

### Output

```cpp
i = 20
j = 10
```

---

## array of pointer, pointer to an array

```cpp
// array of pointer, pointer to an array
#include <iostream>
using namespace std;
int main()
{
    int *a[100]; // array of pointers
    cout << sizeof(a) << endl;

    int(*b)[100]; // pointer points to an array
    cout << sizeof(b);
}
```

### Output

```cpp
400
4
```

---

## Call By Value

```cpp
#include <iostream>
using namespace std;

void set(int x)
{
    x = 20;
}

int main()
{
    int i = 10;
    set(i); // set(10)
    cout << "the value of i is = " << i;

    return 0;
}
```

### Output

```cpp
the value of i is = 10
```

---

## Call By Reference

```cpp
#include <iostream>
using namespace std;

void set_callbyref(int *x) // x=&i, x points to the address of i
{
    *x = 20;
}

int main()
{
    int i = 10;
    set_callbyref(&i); // address of i
    cout << "the value of i is = " << i;

    return 0;
}
```

### Output

```cpp
the value of i is = 20
```

---

## Chaining

```cpp
// pointer chaining
#include <iostream>
using namespace std;
int main()
{
    int *p, **q, ***r;
    int i = 20;
    p = &i; // p=address of i
    q = &p;
    r = &q;
    *p = 3;          // i=3
    ***r = 4;        // i=4;
    **q = 9;         // i=9
    ***r = *p + **q; // i=i+i, i=9+9, i=18
    (*p)++;          // *p=*p+1; i=18+1=19
    cout << "value of i is = " << *p << endl;
    cout << "value of i is = " << **q << endl;
    cout << "value of i is = " << ***r << endl;
    cout << "value of i = " << i << endl;

    return 0;
}
```

### Output

```cpp
value of i is = 19
value of i is = 19
value of i is = 19
value of i = 19
```

---

## function returning pointer

```cpp
// function returning pointer
#include <iostream>
using namespace std;
int *set(int *x)
{
    *x = 100;
    return x;
}
int main()
{
    int i = 20;
    int *p;
    p = set(&i); // p=x // *p,*x, p=x
    cout << *p;

    return 0;
}
```

### Output

```cpp
100
```

---

## increment and decrement of address and value

```cpp
// increment and decrement of address and value
#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    int *p;
    p = &i;
    cout << "prev address = " << p << endl;  // address of i
    cout << "prev value   = " << *p << endl; // value of i
    (*p)++;                                  // *p=*p+1; i=i+1;
    *p++;
    // p=p+1; // p=next adress after i
    cout << "pres address = " << p << endl;
    cout << "pres value   = " << *p << endl; //Garbage Value as no value was input to the next address.
    cout << "pres value   = " << i << endl;

    return 0;
}
```

### Output

```cpp
prev address = 0x61ff08
prev value   = 10
pres address = 0x61ff0c
pres value   = 6422284
pres value   = 11
```

---

## Pointer to an Array

```cpp
// pointer traversing an array
#include <iostream>
using namespace std;
int main()
{
    int *p, a[3];
    a[0] = 10, a[1] = 20, a[2] = 30;
    p = a; // pointer is pointing to the head of the array
    // p is pointing to the address of a[0]

    for (int i = 0; i < 3; i++)
    {
        *p = *p * 2;        // value of head=value of head*2,a[0]=a[0]*2
        cout << *p << endl; // 20    //40    //60
        p++;                // p is pointing to the address of a[1]     //a[2]        //a[3] but condition doesnt satisfied.
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "array = " << a[i] << endl;
    }

    return 0;
}
```

### Output

```cpp
20
40
60
array = 20
array = 40
array = 60
```

---

## Problem Solving

```cpp
#include <iostream>
using namespace std;
int main()
{
    int iden[3][3] = {1, 0, 0,
                      0, 1, 0,
                      0, 0, 1};

    int i, j, flag = 0, counter = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i != j && iden[i][j] != 0)
            {
                flag = 1;
                break;
            }
            if (i == j && iden[i][j] == 1)
            {
                counter++;
            }
        }
    }
    if (counter == 3 && flag == 0)
        cout << "Identity";
    else
        cout << "Not";
    return 0;
}
```

### Output

```cpp
Identity
```

---

## Function Returing Pointer

```cpp
#include <iostream>
using namespace std;
int *set(int *x)
{
    *x = 30;
    return x;
}

int main()
{
    int i = 20;
    int *p;
    p = set(&i);
    cout << *p;

    return 0;
}
```

### Output

```cpp
30
```

---

## Pointer to Array

```cpp
#include <iostream>
using namespace std;
int main()
{
    int a[3], *p, i;
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    p = a; // P is pointing to the head(a[0]) of the array

    for (i = 0; i < 3; i++)
    {
        cout << *p << endl;
        p++;
    }

    return 0;
}
```

### Output

```cpp
10
20
30
```

---

---

# **Structure** [C Language]

---

## Student

```cpp
#include<stdio.h>
#include<string.h>
/// -- -- - -- -- - -- - - Start Solution (a) --- -- --- - -- --
struct student
{
    char id[10];
    char gender[10]; // 'M' / 'F'
    float ctScore;
    float midScore;
    float finalScore;
    float totalScore;
};
/// -- -- - -- -- - -- - - End Solution (a) --- -- --- - -- --


/// -- -- - -- -- - -- - - Start Solution (c) --- -- --- - -- --
int isFailed(struct student s[], size_t len)
{
    int count = 0;
    for(int i=0;i<len;i++)
    {
        if(s[i].totalScore<60)
        {
            count++;
        }
    }
    return count;
}
/// -- -- - -- -- - -- - - End Solution (c) --- -- --- - -- --




/// -- -- - -- -- - -- - - Start Solution (d) --- -- --- - -- --
char* isHighest(struct student s[], size_t len)
{
    float highestScore=s[0].totalScore;
    int max_index=0;
    for(int i=0;i<len;i++)
    {
        if(s[i].totalScore>highestScore)
        {
            highestScore=s[i].totalScore;
            max_index=i;
        }
    }
    //puts(s[max_index].id);
    return s[max_index].id;
}
/// -- -- - -- -- - -- - - End Solution (d) --- -- --- - -- --


int main()
{

    /// -- -- - -- -- - -- - - Start Solution (b) --- -- --- - -- --
    int n;
    printf("Number Student Info to Insert: ");
    scanf("%d",&n);
    //getchar();
    student s[n];

    int count=1;
    for(int i=0;i<n;i++)
    {
        printf("\nStart Number - %d \n",count);
        printf("----------------\n");

        getchar();
        printf("ID: ");
        gets(s[i].id);

        printf("Gender: ");
        getchar();
        gets(s[i].gender);

        printf("CT Score: ");
        scanf("%f",&s[i].ctScore);

        printf("Mid Score: ");
        scanf("%f",&s[i].midScore);

        printf("Final Score: ");
        scanf("%f",&s[i].finalScore);

        printf("Total Score: ");
        scanf("%f",&s[i].totalScore);

        count++;
    }
    /// -- -- - -- -- - -- - - End Solution (b) --- -- --- - -- --


    printf("-------------------------------------------------------------\n\n\n\n");
    ///Highest Income Function Call for (c) .. .. . .. . .
    int totalFailed =  isFailed(s, sizeof(s) / sizeof(*s));
    printf("Total Failed : ");
    printf("%d\n\n",totalFailed);


    ///Youngest Movie Star age Function Call for (d).. .. . .. .. . .
    char* idTOP =  isHighest(s, sizeof(s) / sizeof(*s));
    printf("ID of student obtaining Highest Mark : ");
    puts(idTOP);

    return 0;
}
```

---

## Movie

```cpp
#include<stdio.h>
#include<string.h>
/// -- -- - -- -- - -- - - Start Solution (a) --- -- --- - -- --
struct movieStar
{
    char name[32];
    int age;
    float income;
    char gender[10]; // 'M' / 'F'
};
/// -- -- - -- -- - -- - - End Solution (a) --- -- --- - -- --


/// -- -- - -- -- - -- - - Start Solution (c) --- -- --- - -- --
float highest_earning(struct movieStar s[], size_t len)
{
    float max_income=s[0].income;
    int max_index=0;
    for(int i=0;i<len;i++)
    {
        if(s[i].income>max_income)
        {
            max_income=s[i].income;
            max_index=i;
        }
    }
    return s[max_index].income;
}
/// -- -- - -- -- - -- - - End Solution (c) --- -- --- - -- --




/// -- -- - -- -- - -- - - Start Solution (d) --- -- --- - -- --
int youngest_movieStar(struct movieStar s[], size_t len)
{
    int youngest=s[0].age;
    int min_index=0;
    for(int i=0;i<len;i++)
    {
        if(s[i].age<youngest)
        {
            youngest=s[i].age;
            min_index=i;
        }
    }
    return s[min_index].age;
}
/// -- -- - -- -- - -- - - End Solution (d) --- -- --- - -- --


int main()
{

    /// -- -- - -- -- - -- - - Start Solution (b) --- -- --- - -- --
    int n;
    printf("Number of Movie Star to Insert: ");
    scanf("%d",&n);
    getchar();
    movieStar s[n];

    int count=1;
    for(int i=0;i<n;i++)
    {
        printf("\nStart Number - %d \n",count);
        printf("----------------\n");
        printf("Name: ");
        gets(s[i].name);

        printf("Annual Income: ");
        //gets(s[i].income);
        scanf("%f",&s[i].income);

        printf("Age: ");
        scanf("%d",&s[i].age);

        printf("Gender: ");
        getchar();
        gets(s[i].gender);

        count++;
    }
    /// -- -- - -- -- - -- - - End Solution (b) --- -- --- - -- --


    printf("-------------------------------------------------------------\n\n\n\n");
    ///Highest Income Function Call for (c) .. .. . .. . .
    float annual_income =  highest_earning(s, sizeof(s) / sizeof(*s));
    printf("Highest Annual Income : ");
    printf("%.2f\n\n",annual_income);


    ///Youngest Movie Star age Function Call for (d).. .. . .. .. . .
    int youngest_age =  youngest_movieStar(s, sizeof(s) / sizeof(*s));
    printf("Youngest Movie Star : ");
    printf("%d\n\n",youngest_age);

    return 0;
}
```

---

## Malloc ----> Must use `.c` extention

```cpp
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    for (;;)
    {
        p = (int *)malloc(sizeof(int *) * 100);
    }
    free(p);

    return 0;
}
```

## Malloc ----> Must use `.c` extention

```cpp
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int *ptr;
    ptr = malloc(15 * sizeof(*ptr));
    if (ptr != NULL)
    {
        *(ptr + 5) = 480;
        printf("Value of the 6th integer is %d", *(ptr + 5));
    }
}
```

### Output

```cpp
Value of the 6th integer is 480
```

## Calloc ----> Must use `.c` extention

```cpp
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, *ptr, sum = 0;
    ptr = calloc(10, sizeof(int));
    if (ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("Building and calculating the sequence sum of the first 10 terms \n");
    for (i = 0; i < 10; ++i)
    {
        *(ptr + i) = i;
        sum += *(ptr + i);
    }
    printf("Sum = %d", sum);
    free(ptr);
    return 0;
}
```

### Output

```cpp
Sum = 45
```

## Dynamic memory allocation

- is a process of allocating memory at run time. There are four library routines, `calloc()`, `free()`, `realloc()`, and `malloc()` which can be used to allocate memory and free it up during the program execution. These routines are defined in the header file called `stdlib.h`

## Why use malloc() ?

Here are the reasons of using malloc()

- You should use malloc() when you have to allocate memory at runtime.
- You should use malloc when you have to allocate objects which must exist beyond the execution of the current memory block.
- Go for malloc() if you need to allocate memory greater than the size of that stack.
- It returns the pointer to the first byte of allocated space.
- It enables developers to allocate memory as it is needed in the exact amount.
- This function allocates a memory block size of bytes from the heap.

## Why use calloc() ?

Here are the reasons of using calloc()

- When you have to set allocated memory to zero.
- You can use calloc that returns a pointer to get access to memory heap.
- Used when you need to initialize the elements to zero to returns a pointer to the memory.
- To prevent overflow that is possible with malloc()
- Use calloc() to request a page that is known to already be zeroed.

## Key Difference Between `Malloc` and `Calloc`

- malloc() function returns only starting address and does not make it zero
  on the other hand, calloc() function returns the starting address and make it zero.
- In malloc function, number of arguments is 2
  while in calloc function, number of argument is 1.
- malloc() time efficiency is higher than calloc()
  whereas malloc() is not secure as compared to calloc()
- malloc does not initialize memory
  whereas calloc performs memory initialization.

---

---

# **File**

---

## Input from File and Write to another file [C]

```cpp
#include <stdio.h>
int main()
{
    FILE *fr, *fw;
    fr = fopen("read.txt", "r"); // filename, mode
    fw = fopen("write.txt", "w");
    char ch;

    while ((ch = fgetc(fr)) != EOF)
    {
        putchar(ch);
        fputc(ch, fw);
    }
    fclose(fr);
    fclose(fw);

    return 0;
}
```

## Read a file and Write on that File [C++]

```cpp
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream myfile;
    myfile.open("read.txt");
    myfile << "Writing this to a file." << endl;
    myfile.close();
    return 0;
}
```

## File Read and Write to another File [C]

```cpp
#include <stdio.h>

int main()
{
    FILE *fr, *fw;
    fr = fopen("read.txt", "r");
    fw = fopen("write.txt", "w");
    char s[100];
    while (!feof(fr))
    {
        fgets(s, 100, fr); // (destination, max limit, source)
        fputs(s, fw);      // (source,destination)
        puts(s);
    }
    fclose(fr);
    fclose(fw);

    return 0;
}
```

## File [C]

```cpp
#include <stdio.h>

int main()
{
    FILE *fr, *fw;
    fr = fopen("read.txt", "r");
    fw = fopen("write.txt", "w");
    char a[100], s[100];
    while (!feof(fr))
    {
        fscanf(fr, "%s %s", a, s);
        puts(a);
        puts(s);
        fprintf(fw, "%s %s\n", s, a);
    }
    fclose(fr);
    fclose(fw);

    return 0;
}
```

## File [C]

```cpp
#include <stdio.h>
int main()
{
    /************** Part one ***************/
    FILE *r, *w;
    r = fopen("file1.txt", "r");
    w = fopen("file2.txt", "w");
    char ch;
    while ((ch = fgetc(r)) != EOF)
    {
        fputc(ch, w);
    }
    //fputc(' ',w);
    fclose(r);
    fclose(w);
    /************* Part two ****************/
    r = fopen("file3.txt", "r");
    w = fopen("file2.txt", "a");

    while ((ch = fgetc(r)) != EOF)
    {
        fputc(ch, w);
    }
    fclose(r);
    fclose(w);

    return 0;
}
```

---

## Read File and Fetch data using Indexing.

```cpp
#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("read.txt", "r");
    int counter = 1;
    // fseek(fp, 0, SEEK_SET); // starting from the first character
    // fseek(fp, 3, SEEK_SET); // SEEK_SET = starting from first
    // fseek(fp, 5, SEEK_SET);
    fseek(fp, -3, SEEK_END);   //last 3 char

    while (counter <= 3)
    {
        putchar(fgetc(fp));
        counter++;
    }

    return 0;
}
```

`read.txt`

```txt
ImrulHasan
```

### Output

```cpp
san
```

---

---

# **Recursion**

---

# Example 1

```cpp
#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
int main()
{
    int i;
    i = fact(5);
    cout << i << endl;
}
```

## Example 2

```cpp
#include<iostream>
using namespace std;
int series(int n)
{
    if(n==1) return 1;
    else return n+series(n-1);
}

int main()
{
    cout<<series(5);
    return 0;
}
```

## Example 3

```cpp
#include<stdio.h>
// 2+4+6+8+.....+n
int series(int n)
{
    if(n==0) return 0;
    else return 2*n+series(n-1);
}
int main()
{
    printf("%d",series(4));
    return 0;
}
```

---

---

# **Object Oriented Programming**

---

## Class Example 1

```cpp
#include <iostream>
using namespace std;
class A
{
public:
    int i;
    int add(int x, int y)
    {
        return x + y;
    }
    int sub(int x, int y)
    {
        return x - y;
    }
    int prod(int x, int y)
    {
        return x * y;
    }
    int div(int x, int y)
    {
        if (x > y)
            return x / y;
        else
            return y / x;
    }
};
int main()
{
    A a;
    int c, d;
    cin >> c >> d;
    int m;
    int prod;

    a.i = a.add(c, d); //set the value of `i` of class A using `object a`
    cout << a.i << endl;

    prod = a.prod(c, d); //set the value of `prod` in this main class.
    cout << prod << endl;

    return 0;
}
```

## Class -- Constructor

```cpp
#include <iostream>
using namespace std;
class A
{
public:
    int i;
    A()
    {
        cout << "default constructor" << endl;
    }

    A(int i)
    {
        cout << "parameterized constructor 1" << endl;
    }
    A(int i, int j)
    {
        cout << "parameterized constructor 2" << endl;
    }
    ~A()
    {
        cout << "destructor calling" << endl;
    }
};
int main()
{
    A a;
    A b(10);
    A c(4, 5);

    return 0;
}
```

### Output

```
default constructor
parameterized constructor 1
parameterized constructor 2
destructor calling
destructor calling
destructor calling
```

- So contructors will call first then all the destructor will be called.

---

## Class -- Constructor

```cpp
#include <iostream>
using namespace std;
class A
{
private:
    int i;

public:
    int res;
    A()
    {
        //
    }
    void seti(int p)
    {
        i = p;
    }
    int geti()
    {
        return i;
    }
};
int main()
{
    A a;
    int p;
    cin >> p;
    a.seti(p);
    a.res = a.geti();
    cout << "Result: " << a.res << endl;

    return 0;
}
```

### Output

```
10
Result: 10
```

---

---

# **Inheritance**

---

## Example 1

---

```cpp
// Child has full access of everything from its parent class
// Parent cant access anything from its derive classes

#include <iostream>
using namespace std;
class A
{
public:
    int i;
    A()
    {
        cout << "A class default constructor is calling" << endl;
    }
    ~A()
    {
        cout << "A class destructor is calling" << endl;
    }
};
class B : public A
{
public:
    int j;
    B()
    {
        cout << "B class default constructor is calling" << endl;
    }
    int seti(int p)
    {
        i = p;
        return i;
    }
    ~B()
    {
        cout << "B class default destructor is calling" << endl;
    }
};

int main()
{
    B b;

    cout << "Result: " << b.seti(100) << endl;

    return 0;
}
```

```
A class default constructor is calling
B class default constructor is calling
Result: 100
B class default destructor is calling
A class destructor is calling
```

---

## Example 2

```cpp
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

class D : public B
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
class E : public B
{
public:
    E()
    {
        cout << "E is creating" << endl;
    }
    ~E()
    {
        cout << "E is destroying" << endl;
    }
};

class F : public C
{
public:
    F()
    {
        cout << "F is creating" << endl;
    }
    ~F()
    {
        cout << "F is destroying" << endl;
    }
};
class G : public C
{
public:
    G()
    {
        cout << "G is creating" << endl;
    }
    ~G()
    {
        cout << "G is destroying" << endl;
    }
};

int main()
{
    D d;
    return 0;
}
```

### Output

```
A is creating
B is creating
D is creating
D is destroying
B is destroying
A is destroying
```

---

```cpp
int main()
{
    G g;
    return 0;
}

```

### Output

```
A is creating
C is creating
G is creating
G is destroying
C is destroying
A is destroying
```

---

```cpp
int main()
{
    D d;
    G g;
    return 0;
}
```

### Output

```
A is creating
B is creating
D is creating
A is creating
C is creating
G is creating
G is destroying
C is destroying
A is destroying
D is destroying
B is destroying
A is destroying
```

---

## Example 3

```cpp
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
```

### Output

```
A is creating
B is creating
A is creating
C is creating
D is creating
D is destroying
C is destroying
A is destroying
B is destroying
A is destroying
```

---

---
