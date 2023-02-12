#include <iostream>

using namespace std;

void swap(char &first, char &last){
    char con = first;
    first = last;
    last = con;
}

template<size_t n>
void rev(char (&arry)[n],int size){
    int track = size-2;
    for(int i = 0; i < size/2; i++){
        swap(arry[i], arry[track-i]);
    }
}

int main()
{
    char word[] = "Phyoe Kyaw Than";
    int size = sizeof(word)/sizeof(word[0]);
    rev(word, size);
    for(int i = 0; i < size-1; i++) cout<< word[i];
    return 0;
}
