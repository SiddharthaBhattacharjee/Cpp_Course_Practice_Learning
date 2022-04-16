#include <iostream>

using namespace std;

int countOdds(int low, int high){
    int n = high-low+1;
    if(n%2==0){
        return n/2;
    }
    else{
        if(low%2==0){
            return (n/2);
        }
        else{
            return (n/2) + 1;
        }
    }
}



int main(){
    cout<<countOdds(8,10);
    return 0;
}