#include <iostream>


using namespace std;


int main(){
    int x;
    bool isprime = true;
    cout<<"Enter a positive number : ";
    cin>>x; 
    int i=2;
    while(i*i<=x){
        if(x%i==0){
            isprime = false;
            break;
        }
        i++;
    }
    if(isprime){
        cout<<"Entered number "<<x<<" is a Prime number.";
    }
    else{
        cout<<"Entered number "<<x<<" is NOT a Prime number.";
    }
    return 0;
}