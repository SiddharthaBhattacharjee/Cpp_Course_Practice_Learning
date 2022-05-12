#include <iostream>

using namespace std;

template <class T1, class T2, class T3>
float avg(T1 a, T2 b, T3 c){
    float s = float(a+b+c)/3;
    return s;
}

int main(){
    float s = avg(11.66,20,15.69);
    cout<<s;
    return 0;
}