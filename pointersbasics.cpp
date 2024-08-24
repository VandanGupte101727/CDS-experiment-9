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
