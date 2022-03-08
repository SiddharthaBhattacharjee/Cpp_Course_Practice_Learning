#include <iostream>


using namespace std;


int main(){
    int codes[10];

    //setting loop
    for(int i=0;i<10;i++){
        cout<<"Enter code"<<i+1<<" : ";
        cin>>codes[i];
    }

    cout<<endl;

    //printing loop
    for(int i=0;i<10;i++){
        cout<<"Code"<<i+1<<" : "<<codes[i]<<endl;
    }
    return 0;
}