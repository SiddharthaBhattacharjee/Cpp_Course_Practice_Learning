#include <iostream>


using namespace std;


int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if(age<18){
        cout<<"You Cannot Vote!"<<endl;
    }
    else{
        cout<<"You can Vote!"<<endl;
    }
    return 0;
}