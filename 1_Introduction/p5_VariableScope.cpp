#include <iostream>


using namespace std;

int x = 140;
int y = 121;

int sum(int a, int b){
    int sum = a+b;
    a=10;
    b=15;
    cout<<"global x = "<<x<<"\n";
    return sum;
}

int main(){
    int a = 2;
    int b = 3;
    int x = 5;
    cout<<"Value of a and b before function call is : "<<a<<" , "<<b<<"\n";
    int c = sum(a,b);
    cout<<"Sum of a and b is : "<<a<<" + "<<b<<" = "<<c<<"\n";
    //a and b remain unchanged in main even after changing in sum.
    cout<<"x = "<<x<<" & y = "<<y<<"\n";
    //local variable takes presidence.
    return 0;
}