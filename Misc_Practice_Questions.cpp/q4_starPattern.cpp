//Statement : Write a program to print the given pattern for given user input
/*
n = 4

*
**
***
****
***
**
*

*/

#include <iostream>


using namespace std;


int main(){
    int n;
    cout<<"Enter pattern number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}