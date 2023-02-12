#include <iostream>

using namespace std;
int maxint(int num_arry[5],int size){
    int max = num_arry[0];
    int index = 0;
    for(int i = 0; i < size; i++){
        if(max < num_arry[i]){
            max = num_arry[i];
            index = i;
        }
    }
    return index;
}
int main()
{
    int number[5];
    int index = 0;
    cout<< "Enter five number (to apart numbers use space between): ";
    for(int i = 0; i < 5; i++){
        cin>> number[i];
    }
    index = maxint(number, 5);
    cout<< "largest number is " << number[index] << endl << "It's index is " << index;
    

    return 0;
}

