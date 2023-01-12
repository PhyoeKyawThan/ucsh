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
    d1 = {2, 39.7};
    d2 = {7, 8.3};
    d3 = {9, 6.3};
    Volume volume = {d1, d2, d3};

    o_height = volume.height.feets + volume.height.inches/12;
    o_length = volume.length.feets + volume.length.inches/12;
    o_width  = volume.width.feets + volume.width.inches/12;

    cout<<"Volume = "<<o_height*o_length*o_width << endl;
    return 0;
}
