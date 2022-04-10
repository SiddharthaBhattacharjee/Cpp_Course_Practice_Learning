#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter number of lines for pattern : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        int s = n/2 +1;
        s = s-i;
        for(int k=1;k<=s;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}