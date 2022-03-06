#include <iostream>


using namespace std;


int main(){
    const int a = 100;
    cout<<"Value of a is : "<<a<<endl;
    //a = 50; Throws error since a is constant.
    return 0;
}