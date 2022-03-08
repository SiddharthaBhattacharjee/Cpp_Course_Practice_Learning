#include <iostream>


using namespace std;


int main(){
    int arr[] = {101,102,103,104,105,106};

    int* p = arr;// p is a pointer pointing to first int in array
    // can access the elements of array using this pointer p
    // p++ means p=p+size of datatype (int)
    cout<<"Value in address "<<p<<" is : "<<*p<<endl;
    p++;
    cout<<"Value in address "<<p<<" is : "<<*p<<endl;
    p++;
    cout<<"Value in address "<<p<<" is : "<<*p<<endl;
    p++;
    cout<<"Value in address "<<p<<" is : "<<*p<<endl;
    p++;
    cout<<"Value in address "<<p<<" is : "<<*p<<endl;
    p++;
    cout<<"Value in address "<<p<<" is : "<<*p<<endl;

    return 0;
}