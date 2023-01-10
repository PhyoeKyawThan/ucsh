#include <iostream>
#include <iomanip>

using namespace std;

struct phone
{
    int areaCode = 0;
    int exchangeCode = 0;
    int number = 0;
};
int main(){
    phone first_num, sec_num;
    first_num =  {212, 767, 9800};
    char space, dash='-';
    cout<< "Enter your area code, exchange and number: ";
    cin>> sec_num.areaCode >> space >> sec_num.exchangeCode >> space >> sec_num.number;
    
    cout<< "My number is " << "("<< first_num.areaCode << ") "<< space << first_num.exchangeCode << dash << first_num.number << endl;
    
    cout<< "Your number is " << "(" << sec_num.areaCode << ") " << space << sec_num.exchangeCode << dash << sec_num.number << endl;
    
    
    
    return 0;
}