#include <iostream>

using namespace std;

int count = 0;
void coUnt(){
    count++;
}
int main() {
    // call coUnt() function ten times 
    for(int i = 0; i < 10; i++) coUnt();
    cout<< "I've been called " << count << " times";
    return 0;
}