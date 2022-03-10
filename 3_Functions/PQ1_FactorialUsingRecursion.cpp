#include <iostream>


using namespace std;

int fact(int a){
    if(a>1){
        return a*fact(a-1);
    }
    else if(a==0){
        return 1;
    }
    else{
        return a;
    }
}

int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"Factorial of a : "<<a<<"! = "<<fact(a);
    return 0;
}