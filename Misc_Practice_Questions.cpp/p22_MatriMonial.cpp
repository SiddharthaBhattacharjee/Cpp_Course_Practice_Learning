#include <iostream>

using namespace std;

int totalCombinations(int n, int m){
    int total = 1;
    for(int i=0;i<m;i++){
        total *= (n-i);
    }
    return total;
}


int main(){
    cout<<totalCombinations(7,5);
    return 0;
}