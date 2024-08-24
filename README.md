# CDS-experiment-9

AIM:-To learn about pointers, how to implemnent pointers for different data types, how to make and print an array using pointers.<br>

Software:-VS code <br>

Theory:-<br>
In C++, pointers are variables that hold the address of another variable in memory, providing a potent means of data manipulation. They make it possible to directly access and modify variables, arrays, and dynamically allocated memory, which promotes efficient memory usage. Depending on the kind of data they point to, pointers can be of different types, such as char*, int*, etc. A variable's address can be found using the & operator, and its value can be accessed by dereferencing the variable using the * operator. Pointers are essential for efficient array manipulation, dynamic memory allocation via new and delete, and performance enhancement when sending big structures or arrays to functions without copying them.<br>

CODE:-<br>


    #include <iostream>
    using namespace std;

    int main()
    {
    int a = 10;
    int *p = &a;
    cout << "Dereferencing the pointer of a: " << *p << endl;
    *p = 20;
    cout << "Updating value using pointer: " << a << endl;

    float f = 100.009;
    float *q = &f;
    cout << "Value of f: " << f << endl;
    cout << "Pointer of f: " << q << endl;
    cout << "Dereferencing f: " << *q << endl;
    cout << "Referencing f: " << &f << endl;

    char c = 'c';
    char *r = &c;
    cout << "Character: " << c << endl;
    cout << "Pointer of character: " << r << endl;
    cout << "Referencing character: " << &c << endl;
    cout << "Dereferencing: " << *r << endl;

    int arr[] = {5, 90, 30};
    int *s = &arr[3];
    cout << s << endl;
    cout << "Printing an array by dereferencing its pointers: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << (*(arr + i)) << endl; // Printing the array using pointers 
    }

    cout << "Creating an array using pointers: " << endl;
    int *t = new int[5];
    for (int i = 0; i < 5; i++)
    {
        t[i] = 10 * (i + 1);
    }
    // Printing the values 
    cout << *t << endl;
    cout << *t + 1 << endl;
    cout << *(t + 1) << endl;
    cout << 2[t] << endl;
    cout << t[2] << endl;
    *t++;
    cout << *t;

    return 0;
    }


Output<br>
![exp9](https://github.com/VandanGupte101727/CDS-experiment-9/blob/main/Screenshot%202024-08-24%20at%2011.09.32%20PM.png)<br>

Conclusion:-<br>
in this experiment we learnt the basics of pointers in cpp and how to create an array with it. <br>


