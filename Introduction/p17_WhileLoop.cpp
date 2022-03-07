#include <iostream>


using namespace std;


int main(){
    int n, x=1;
    cout<<"Enter no. of natural numbers to be printed : ";
    cin>>n;
    cout<<endl;
    while(x<=n){
        cout<<x<<",";
        x++;
    }
    return 0;
}