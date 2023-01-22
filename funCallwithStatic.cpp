#include <iostream>

using namespace std;

int fun_count(){
    static int count = 0;
    count++;
    return count;
}
int main() {
    int num_of_time;
    for(int i = 0 ; i  < 5 ; i++) fun_count();
    cout<< "function has called " << fun_count() << " times.";
    return 0;
}