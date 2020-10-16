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
    if(counter==3 && flag==0
        printf("Identity");
    else
        printf("Not");
    return 0;
}
```

---

---
