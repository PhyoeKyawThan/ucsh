#include <iostream>

using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};

int main()
{
    Date date;
    char slash;
    cout<<"Enter date (format: dd/mm/yy): ";
    cin>> date.day >> slash >> date.month >> slash >> date.year;
    
    cout<<"Date: "<< date.day << slash << date.month << slash<< date.year<< endl;
    
    return 0;
}
