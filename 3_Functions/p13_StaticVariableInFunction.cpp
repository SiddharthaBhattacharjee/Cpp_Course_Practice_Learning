#include <iostream>


using namespace std;

int calc(int a){
    static int c = 0; // this will run only in 1st call, 
    c = c+1; //c will retain its value from last call
    return a+c;
}

int main(){
    int a = 1;
    cout<<calc(a)<<endl;
    cout<<calc(a)<<endl;
    cout<<calc(a)<<endl;
    cout<<calc(a)<<endl;
    cout<<calc(a)<<endl;
    cout<<calc(a)<<endl;
    cout<<calc(a)<<endl;
    // a value stays same, c value keeps changing each call and hence the output changes.
    return 0;
}