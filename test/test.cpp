#include <iostream>

using namespace std;
int main()
{
    int a,b,c, n;
    cout<< "Enter a number to get sequence of fibonacci: ";
    cin>> n;

    for(int i = 0; i <= 5; i++)
    {
        if( i==0 || i == 1 || i == 2){
            a = 0; 
            b = 1; 
            c = 1; 
        }else{
            int track = c;        
            c = c + b;
            b = track;
        }
    }
    cout<< "Fibonacci of " << n << "is "<< c << endl;

    return 0;
}