#include <iostream>


using namespace std;

int sum(int a){
    if(a>0){
        return a+sum(a-1);
    }
    else{
        return a;
    }
}

int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"Sum of "<<a<<" natural numbers is : "<<sum(a);
    return 0;
}