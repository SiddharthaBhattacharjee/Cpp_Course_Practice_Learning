#include <iostream>


using namespace std;


int main(){
    int x = 76;
    int & y = x; // y and x both point to same place
    y=10;
    cout<<x;
    return 0;
}