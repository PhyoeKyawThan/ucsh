#include <iostream>

using namespace std;

//structure
struct Distance{
    int feets;
    float inches;
};

//volume struct 
struct Volume{
    Distance height;
    Distance length;
    Distance width;
};

int  main()
{
    float o_height, o_length, o_width;
    Distance d1, d2, d3;
    d1 = {16, 3.5};
    d2 = {12, 6.25};
    d3 = {8, 1.75};
    Volume volume = {d1, d2, d3};

    o_height = volume.height.feets + volume.height.inches/12;
    o_length = volume.length.feets + volume.length.inches/12;
    o_width  = volume.width.feets + volume.width.inches/12;

    cout<<"Volume = "<<o_height*o_length*o_width << endl;
    return 0;
}