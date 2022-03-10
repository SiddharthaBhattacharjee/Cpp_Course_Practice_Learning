#include <iostream>


using namespace std;

void fib(int n){
    static int a = 0;
    static int b = 1;
    if(n>0){
        cout<<a<<",";
        int t = a;
        a = b;
        b = t+b;
        fib(n-1);
    }
}

int main(){
    int n;
    cout<<"Enter number of terms : ";
    cin>>n;
    fib(n);
    return 0;
}