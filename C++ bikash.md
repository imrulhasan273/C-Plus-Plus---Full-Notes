# C++

---

# **Iostream**

---

```cpp
#include<iosream>
```

```cpp
cin>> // console input
cout<< // console output
cin>>a; //input operator:
cin>>a; //object extraction variable
cout<<"C++"; //output operator:
cout<<"C++" //object insertion(put to) variable
```

---

# **Basic Access Specifier**

---

- access specifiers are `public:`, `private:` , `protected:`

---

# **A simple C++ program**

```cpp
#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello World";

    return 0;
}
```

---

# **Basic Structure**

---

1. documentation section
   Comment line
   1. single //........
   2. multiple
2. Preprocessor directives section
   1. link section
      #include<iostream>
   2. definition section
      #define COUNT 10 // COUNT is a constant.
3. Global Declaration Section
4. Class and Method definition section
5. main function section
   {
   local declaration section
   program statements
   }
6. method definition section

---

# **If Statement**

---

```cpp
//simple if statement
//no else statement

#include<iostream>
using namespace std;
int main()
{
    int sal, b;
    cout<<"Enter your salary";
    cin>>sal;

    if(sal>=10000)
    {
        b = (sal*10)/100;
        cout<<"Bonus:"<<b;
        sal = sal+b;
    }

    cout<<"Salary is"<<sal;


    return 0;
}
```

---

# **Introduction to Function**

---

1. built in function

   - this is library function
     ex. clrscr(), getch(),
   - header file: math.h, conio.h

2. user defined function

---

# **Category of Function**

---

4 category of function

1. (A) function with no return value and no arguments
   - exp: void add(void);
2. (B) function with arguments and no return value
   - exp: void add(int , int);
3. (C) function with no arguments but return a value.
   - exp: int add(void)
4. (D) function with arguments and return value.
   - exp: int add(int, int);

---

# **Inline Function**

---

```cpp
#include<iostream>
using namespace std;

inline int max(int x, int y)
{
    return ((x>y) ? x:y);
}
int main()
{
    int a, b;
    cout<<"Enter two value: ";
    cin>>a>>b;
    cout<<"greater value is "<<max(a,b);

    return 0;
}
```

---

# **Function with No Arg**

---

```cpp
#include<iostream>
using namespace std;
int add(void);
int main()
{
    int ans;
    ans=add();

    cout<<"Addition is "<<ans;

    return 0;
}

int add(void)
{
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    return a+b;
}
```

---

# **Function with ARG and Return type**

---

```cpp
#include<iostream>
using namespace std;
int sqr(int);
int main()
{
    int no, ans;
    cout<<"Enter a number";
    cin>>no;

    ans=sqr(no);
    cout<<"Square of "<<no<<" is "<<ans;

    return 0;
}

int sqr(int x)
{
    return x*x;
}
```

---

# **Function with no return type but ARG**

---

```cpp
#include<iostream>
using namespace std;
void add(int, int);     //prototype
/***
in prototype not need to use variable name. use just variable type.
as (int , int)
***/
int main()
{
    int a, b;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value of b";
    cin>>b;
    add(a,b);   //actual arg

    return 0;
}
void add(int x, int y)      //formal arg
{
    int c;
    c=x+y;
    cout<<"Addition is"<<c;
}
```

---

# **Reference Variable**

---

```cpp
#include<iostream>
using namespace std;
int main()
{
    int a=100;
    int &ref=a; //a=ref

    cout<<"value of a = "<<a<<endl;
    cout<<"value of ref = "<<ref<<endl;
    cout<<"add of a = "<<&a<<endl;
    cout<<"add of ref= "<<&ref<<endl;

    return 0;
}
```

---

# **Default Arg**

---

```cpp
#include<iostream>
using namespace std;
int add(int x=10, int y=20, int z=30)
//default argument should be right to left serially.
{
    return (x+y+z);
}
int main()
{
    cout<<add()<<endl;
    cout<<add(100)<<endl;
    cout<<add(50,50)<<endl;
    cout<<add(100,100,100)<<endl;


    return 0;
}
```

---

# **Constant Arg**

---

```cpp
#include<iostream>
using namespace std;
int add(const int x)
{
    int y;
    cout<<(y=(x+10));
    /***
    constant value cant be changed.
    so that x=x+10 is incorrect
    ***/
}
int main()
{
    add(10);

    return 0;
}
```

---

# **Call By Reference**

---

```cpp
#include<iostream>
using namespace std;
void swap(int &, int &);
int main()
{
    int a, b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    cout<<"before swapping"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    swap(a,b);
    cout<<"after swapping"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    return 0;
}
void swap(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
```

---

# **Rcursion**

---

```cpp
#include<iostream>
using namespace std;

long fact(int);

int main()
{
    int no;
    cout<<"Enter a number: ";
    cin>>no;
    cout<<"Factorial of "<<no<<" is = "<<fact(no);

    return 0;
}

long fact(int n)
{
    if(n==0)
    {
        return 1;

    }
    else
    {
        return (n*fact(n-1));
    }
}
```

---

# **Class**

---

```cpp
#include<iostream>
using namespace std;
class Sum
{
    int a, b, t; //in private mode by default
public:
    void getdata(void);
    void putdata(void);
};
void Sum::getdata(void)
{
    cout<<"Enter the value of 'a' and 'b' ";
    cin>>a>>b;
}
void Sum::putdata(void)
{
    t=a+b;
    cout<<"Addition of "<<a<<"and"<<b<<"="<<t;
}
int main()
{
    Sum obj;        //Sum works as datatype obj is variable
    obj.getdata();
    obj.putdata();
    /***
    private data or function cant be accessed directly by outside class
    public function and data of that class will be accessed directly outside class.

    public function of that class may be includes private variable of that class
    hence obj of a class accessed them outside class.


    ***/



    return 0;
}
```

---

# **Static Member**

---

```cpp
/***
#include<iostream>
using namespace std;
class bca
{
    int no;
    static int count;
};

int bca::count=10;

int main()
{


    return 0;
}

diagram:

 t1 t2 t3
 |  |  |
 no no no
100 200 300
  \ | /
  count
    3

***/
#include<iostream>
using namespace std;
class test
{
    int no;            //normal data member
    static int count;   //static data member
public:
    void getval(int);
    void dispcount(void);
};
void test::getval(int x)
{
    no=x;
    cout<<"number is ="<<no<<endl;
    count++;
}
void test::dispcount(void)
{
    cout<<"counter is ="<<count<<endl;
}
int test::count;


int main()
{
    test t1,t2,t3;
    t1.dispcount();
    t2.dispcount();
    t3.dispcount();

    t1.getval(100);
    t2.getval(200);
    t3.getval(300);

    t1.dispcount();
    t2.dispcount();
    t3.dispcount();


    return 0;
}

```

---

# **Define Member Function**

---

```cpp
/***
2 steps:
    1. inside the class definition.
    2. outside the class definition.

    class test
    {
        int roll;
        float per;
    public:
       void getdata(int , float);        //inside
       void putdata(void);               //outside
    };


***/
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
```

---

# **Static Member Function**

---

```cpp
/***
class test
{
    static void disp(void); //1. only access static data/function member.
                            //2. do not called by obj.function but called by class
                            //3. called as test::disp()


};
***/
#include<iostream>
using namespace std;
class test
{
    int no;
    static int count;
public:
    void setno(void);
    void dispno(void);
    static void dispcount(void);
};
void test::setno(void)
{
    no=++count;
}
void test::dispno(void)
{
    cout<<"Object no"<<no<<endl;
}
static void test::dispcount(void)
{
    cout<<"counter"<<count<<endl;
}
int test::count;
int main()
{
    test t1,t2;

    t1.setno();
    t2.setno();

    test::dispcount();

    test t3;

    t3.setno();

    test::dispcount();

    t1.dispno();
    t2.dispno();
    t3.dispno();



    return 0;
}
```

---

# **Function Overloading**

---

```cpp
/***
c++

more than one function with same name.
but functions parameters or its type should be
different to overload.
like
int calc(void);
int calc(int a);
int calc(int a, int b);
int calc(float a);  // if i use 'a' more than one than its type should be different.

***/

#include<iostream>
using namespace std;

int calc(int);
int calc(int,int);

int main()
{
    int s, a, b;
    cout<<"Enter a number: ";
    cin>>s;
    cout<<"Square of "<<s<<" is "<<calc(s);

    cout<<endl<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Addition of "<<a<<" and "<<b<<" is "<<calc(a,b);

    return 0;
}
int calc(int x)
{
    return (x*x);
}
int calc(int x, int y)
{
    return (x+y);
}
```

---
