#include <iostream>

using namespace std;

struct Fraction{
    int numerator;
    int denominator;
};
int main()
{
    int a, b, c, d, result;
    char operat, sign;
    cout<< "Enter Full fraction: ";
    cin>> a >> sign >> b >> operat >> c >> sign >> d;

    cout<< a << sign << b << operat << c << sign << d << " = ";
    switch(operat){
        case '+':
            cout<< (a*d) + (c*b) << sign << b*d;
            break;
        case '-':
            cout<< (a*d) - (c*b) << sign << b*d;
            break;
        case '/':
            cout<< a*d << sign << b*c;
            break;
        case '*':
            cout<< a*c << sign << b*d;
            break;
        default:
            cout<< "Check ur operator..";
            break;
    }
    cout<< endl;
    return 0;
}