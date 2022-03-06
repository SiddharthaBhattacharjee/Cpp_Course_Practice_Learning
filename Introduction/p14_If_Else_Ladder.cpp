#include <iostream>


using namespace std;


int main(){
    int income;
    cout<<"Enter Monthly Income : ";
    cin>>income;
    if(income<0){
        cout<<"You are in debt"<<endl;
    }
    else if(income>0 && income<2000){
        cout<<"You are Poor"<<endl;
    }
    else if(income>=2000 && income<10000){
        cout<<"You are lower middle class"<<endl;
    }
    else if(income>=10000 && income<50000){
        cout<<"You are middle class"<<endl;
    }
    else if(income>=50000 && income<120000){
        cout<<"You are upper middle class"<<endl;
    }
    else if(income>=120000 && income<500000){
        cout<<"You are Rich"<<endl;
    }
    else{
        cout<<"You are very Rich"<<endl;
    }
    return 0;
}