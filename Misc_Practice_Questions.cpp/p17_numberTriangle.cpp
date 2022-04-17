#include <iostream>

using namespace std;

/*
code to take input n from user and print the following pattern
1
1 3
1 3 5
1 3 5 7
*/

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1;i<=n;i+=2){
        for(int j=1; j<=i;j+=2){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}