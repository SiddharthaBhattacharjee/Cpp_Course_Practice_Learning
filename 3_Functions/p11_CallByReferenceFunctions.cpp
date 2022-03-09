#include <iostream>


using namespace std;

// this is call by value and will NOT work for swapping
void swap(int a,int b){
    a = a+b;
    b = a-b;
    a = a-b;
}

// this is call by reference using pointer and will work, but needs address of variable to be passed
void swapPointer(int* a,int* b){
    *a = *a+*b;
    *b = *a-*b;
    *a = *a-*b;
}

//this is call by reference using C++ Reference Variable, takes normal input like swap() , gives desired output like swapPointer()
void swapRefVer(int &a, int &b){
    a = a+b;
    b = a-b;
    a = a-b;
}

int main(){
    int a = 5, b = 10;
    cout<<"Before Swap , a : "<<a<<" and b : "<<b<<endl;
    swap(a,b); //doesn't work
    cout<<"After running swap() , a : "<<a<<" and b : "<<b<<endl;
    swapPointer(&a,&b); // works , but takes pointer input
    cout<<"After running swapPointer() , a : "<<a<<" and b : "<<b<<endl;
    swapRefVer(a,b); //works the best.
    cout<<"After running swapRefVer() , a : "<<a<<" and b : "<<b<<endl;
    return 0;
}