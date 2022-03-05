#include <iostream>


using namespace std;

int x = 10;

int main(){
    int x = 101;
    cout<<"Value of x is : "<<x<<endl;
    cout<<"Global value of x is : "<<::x<<endl;
    return 0;
}