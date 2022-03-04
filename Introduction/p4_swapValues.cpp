#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int b = 20;
    cout<<"Before swap , a = "<<a<<" and b = "<<b<<" \n";
    int temp = b;
    b=a;
    a=temp;
    cout<<"After swap , a = "<<a<<" and b = "<<b<<" \n";
    return 0;
}

