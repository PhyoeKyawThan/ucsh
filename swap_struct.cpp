#include <iostream>

using namespace std;
struct Time{
    int hr;
    int min;
    int sec;
};
void swap(Time&, Time&);

int main()
{
   Time t_1, t_2;
   char chara;
   cout<<"Enter first time (format: h-m-s): ";
   cin>> t_1.hr >> chara >> t_1.min >> chara >> t_1.sec;
   cout<< t_1.hr << chara << t_1.min << chara << t_1.sec << endl;
   
   cout<<"Enter  second time (format: h-m-s): ";
   cin>> t_2.hr >> chara >> t_2.min >> chara >> t_2.sec;
   cout<< t_2.hr << chara << t_2.min << chara << t_2.sec << endl;
   
   //swap
   swap(t_1, t_2);
   cout<< "After swap" << endl;
   cout<< "First time after swap: " << t_1.hr << chara << t_1.min << chara << t_1.sec << endl;
   cout<< "Second time after swap: " << t_2.hr << chara << t_2.min << chara << t_2.sec << endl;
}

void swap(Time &t1, Time &t2){
    int hr = 0, min=0, sec=0;
    hr = t1.hr;
    min = t1.min; 
    sec = t1.sec;

    //hour
    t1.hr = t2.hr;
    t2.hr = hr;
    //minutes
    t1.min = t2.min;
    t2.min = min;
    //sec
    t1.sec = t2.sec;
    t2.sec = sec;
}
