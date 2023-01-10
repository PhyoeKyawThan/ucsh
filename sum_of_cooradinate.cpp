#include <iostream>

using namespace std;

//structure
struct point{
    int x=0,y=0,z = 0;
};

int  main()
{
    point  p1, p2;
    char comma = ',';
    cout<< "Enter coordinates (x, y) for p1: ";
    cin>> p1.x >> p1.y;

    cout<< "Enter coordinates (x, y) for p2: ";
    cin>> p2.x >> p2.y;

    p1.z = p1.x + p2.x;
    p2.z = p1.y + p2.y;

    cout<<"\nCoordinates of p1 + p2 are: " << p1.z << comma << p2.z << endl;
    return 0;
}