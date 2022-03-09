#include <iostream>


using namespace std;


int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    do{
        cout<<"Entered number is : "<<a<<endl;
        a--;
    }while(a>0);
    return 0;
}