#include <iostream>

using namespace std;

int main(){
    int row , count = 0, count2 = 0, k = 0;
    cout<<"Enter No. of Rows : ";
    cin>>row;

    for(int i=1; i<=row; ++i){
        for(int j=1; j<=row-i; ++j){
            cout<<"  ";
            ++count;
        }
        while(k != 2*i-1){
            if(count <= row-1){
                cout<<i+k<<" ";
                ++count;
            }
            else{
                ++count2;
                cout<<i+k-2*count2<<" ";
            }
            k++;
        }
        count2 = count = k = 0;
        cout<<endl;
    }
    return 0;
}