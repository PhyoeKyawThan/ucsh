#include <iostream>

using namespace std;
struct fraction
{
  int x,y;  
};

//add
fraction fadd(fraction f1, fraction f2)
{
    fraction result;
    result.x = f1.x*f2.y + f2.x*f1.y;
    result.y = f1.y*f2.y;
    return result;
}
//substract
fraction fsub(fraction f1, fraction f2)
{
    fraction sub_result;
    sub_result.x = f1.x*f2.y - f2.x*f1.y;
    sub_result.y = f1.y*f2.y;
    return sub_result;
}
//multiply
fraction fmulti(fraction f1, fraction f2)
{
    fraction mul_result;
    mul_result.x = f1.x * f2.x;
    mul_result.y = f1.y*f2.y;
    return mul_result;
}
//divide
fraction fdiv(fraction f1, fraction f2)
{
    fraction div_result;
    div_result.x = f1.x*f2.y + f2.x*f1.y;
    div_result.y = f1.y*f2.y;
    return div_result;
}
int main() {
    //test
    fraction first, sec, result;
    char sign, operat;
    cout<< "Enter full fraction of operation: (eg. 1/2+2/4): ";
    cin>> first.x >> sign >> first.y >> operat >> sec.x >> sign >> sec.y;
    
    switch(operat)
    {
        case '+':
        result = fadd(first, sec);
        cout<< result.x << sign << result.y;
        break;
        case '-':
        result = fsub(first, sec);
        cout<< result.x << sign << result.y;
        break;
        case '/':
        result = fdiv(first, sec);
        cout<< result.x << sign << result.y;
        break;
        case '*':
        result = fmulti(first, sec);
        cout<< result.x << sign << result.y;
        break;
        default: 
        cout<< "Enter valid operator for function calling and calculation. Thanks!";
    }
    result = {0,0};
    return 0;
}