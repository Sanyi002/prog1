#include <iostream>
#include <string>

using namespace std;

void swap(int* a, int* b)
{

    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

void swap2(int& a, int& b)
{
    a ^= b;
    b ^= a;
    a ^= b;
}

int main()
{
    int a = 3, b = 5;
    cout << "a = " << a << ", b = " << b << endl;
    swap(&a, &b);
    cout << "a = " << a << ", b = " << b << endl;
    swap2(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}
