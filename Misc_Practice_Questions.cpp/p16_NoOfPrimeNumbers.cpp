#include <iostream>

using namespace std;

// a function that returns the number of prime numbers till n
int NoOfPrimeNumbers(int n){
    int count = 0;
    for(int i=2;i<=n;i++){
        bool isPrime = true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            count++;
        }
    }
    return count;
}


int main(){
    return 0;
}