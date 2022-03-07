#include <iostream>
#include <iomanip>

using namespace std;


int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    cout<<endl;
    cout<<"Multiplication Table of "<<x<<" is : "<<endl;
    cout<<endl;
    for(int i=1;i<=10;i++){
        cout<<x<<"x"<<setw(2)<<i<<" = "<<setw(4)<<x*i<<endl;
    }
    return 0;
}