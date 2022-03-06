#include <iostream>
#include <iomanip>


using namespace std;


int main(){
    int a=4,b=69,c=128,d=1096;
    cout<<"value of a without setw is : "<<a<<endl;
    cout<<"value of b without setw is : "<<b<<endl;
    cout<<"value of c without setw is : "<<c<<endl;
    cout<<"value of d without setw is : "<<d<<endl;
    cout<<endl;
    cout<<"Value of a with setw(4) is : "<<setw(4)<<a<<endl;
    cout<<"Value of b with setw(4) is : "<<setw(4)<<b<<endl;
    cout<<"Value of c with setw(4) is : "<<setw(4)<<c<<endl;
    cout<<"Value of d with setw(4) is : "<<setw(4)<<d<<endl;
    return 0;
}