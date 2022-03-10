#include <iostream>


using namespace std;

int sum(int a,int b){
    return a+b;
}

int sum(int a,int b,int c){
    return a+b+c;
}

int sum(int a){
    if(a>0){
        return a + sum(a-1);
    }
    return 0;
}

// same function does different task based on arguements given to it.

int main(){
    cout<<"sum(10) = "<<sum(10)<<endl;
    cout<<"sum(10,15) = "<<sum(10,15)<<endl;
    cout<<"sum(2,3,5) = "<<sum(2,3,5)<<endl;
    return 0;
}