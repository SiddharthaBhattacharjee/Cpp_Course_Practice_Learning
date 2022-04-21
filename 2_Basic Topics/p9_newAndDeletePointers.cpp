#include <iostream>

using namespace std;

int main(){

    int * ptr = new int(65); // directly store value in memory.
    cout<<"Address of ptr is "<<ptr<<endl;
    cout<<"Value of ptr is "<<*ptr<<endl;
    delete ptr; // free the memory block
    cout<<"Address of ptr is "<<ptr<<endl;
    cout<<"Value of ptr is "<<*ptr<<endl;
    return 0;
}