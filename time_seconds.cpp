#include <iostream>

using namespace std;

struct Time{
    int hours;
    int minutes;
    int seconds;
};
int main()
{
    Time time_;
    char full;
    cout<< "Enter time as format (hh:mm:ss): ";
    cin>> time_.hours >> full >> time_.minutes >> full >> time_.seconds;
    long to_secods = time_.hours*3600 + time_.minutes*60 + time_.seconds;
    cout<< "Seconds of " << time_.hours << full << time_.minutes << full << time_.seconds << " is " << to_secods << endl;

    return 0;
}