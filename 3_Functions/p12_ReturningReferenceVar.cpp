#include <iostream>


using namespace std;

int & chooseVar(int& a){
    return a; // this is how we return reference of a variale
}

int main(){
    int a = 190;
    chooseVar(a) = 99;// 99 is getting stored in reference of a.
    cout<<a;
    return 0;
}