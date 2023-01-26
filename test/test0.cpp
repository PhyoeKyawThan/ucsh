#include <iostream>

using namespace std;

int fib(int n){
    if (n == 0 || n == 1 || n == 2)   return 1;
    else return fib(n-1)+fib(n-2);
}

int main()
{
    int n ;
    cout<< "Enter a number to get Fibonacci sequence: ";
    cin>> n;
    cout<< "Fibonacci of " << n << "is "<< fib(n) << endl;
    return 0;
}