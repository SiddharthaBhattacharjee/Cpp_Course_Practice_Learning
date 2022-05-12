#include <iostream>

using namespace std;

template <class T1, class T2>
void swap(T1 &a, T2 &b){
    T1 temp = a;
    a = b;
    b = temp;
}

int main(){
    //same function can swap any two variables of any type
    int a = 10;
    int b = 20;
    swap(a,b);
    cout<<a<<" , "<<b;
    cout<<endl;
    string x = "Hello";
    string y = "World";
    swap(x,y);
    cout<<x<<" , "<<y;
    return 0;
}