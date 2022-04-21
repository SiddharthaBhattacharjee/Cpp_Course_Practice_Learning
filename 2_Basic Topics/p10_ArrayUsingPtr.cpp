#include <iostream>

using namespace std;

int main(){
    int * arr = new int[5]; // allocate memory for 5 ints
    arr[0] = 10;
    *(arr+1) = 20;
    *(arr+2) = 30;
    *(arr+3) = 40;
    *(arr+4) = 50;
    cout<<"Address of arr is "<<arr<<endl;
    cout<<"Value of arr is "<<*arr<<endl;
    cout<<"Value of arr+1 is "<<*(arr+1)<<endl;
    cout<<"Value of arr+2 is "<<*(arr+2)<<endl;
    cout<<"Value of arr+3 is "<<*(arr+3)<<endl;
    cout<<"Value of arr+4 is "<<*(arr+4)<<endl;
    delete [] arr; // free the memory block
    cout<<"Address of arr is "<<arr<<endl;
    cout<<"Value of arr is "<<*arr<<endl;
    
    return 0;
}