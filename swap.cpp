#include <iostream>

using namespace std;

void swap(int&, int&);

int main()
{
    int a,b;
    cout<< "Enter first number: ";
    cin>> a;
    cout<< "Enter second number: ";
    cin>> b;
    //swap the value and make pass by ref
    swap(b, a);
    cout<< "swap a to b and b to a.\n" << endl;
    cout<< "First number: " << a;
    cout<< "\nSecond number: " << b << endl;
    return 0;
}

void swap(int &b, int &a){
    int c = 0;
    c = a;
    a = b;
    b = c;
}
