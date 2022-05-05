#include <iostream>

using namespace std;

int main(){
    int a=3,b=12;
    bool toggle = true;
    int sum = 0;
    int count = 0;
    for(int i=1;i<=b;i++){
        if(toggle){
            sum -= i;
        }
        else{
            sum += i;
        }
        count++;
        if(count == a){
            count = 0;
            toggle = !toggle;
        }
    }
    cout<<sum;
    return 0;
}