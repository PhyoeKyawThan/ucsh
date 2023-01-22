#include <iostream>

using namespace std;

double power(int, int);
double power(char, int, long, float);

int main(){
    int n, p;
    char sign = '^';
    cout<<"Enter number: ";
    cin>> n;
    cout<<"Enter power: ";
    cin>> p;
    cout<< n <<'^'<< p << " = " << power(n,p);
    
    cout<<"\nSecond function insertion"<<endl;
    power(sign, p, power(n, p), n);
    return 0;
}

double power(int n, int p)
{
    double result = 1;
      for(int i = 0; i < p; i++)
    {
        result *= n;
    }
    return result;
}

double power(char sign, int power, long result, float number)
{
    cout<< number << sign << power << " = "<< result;
}