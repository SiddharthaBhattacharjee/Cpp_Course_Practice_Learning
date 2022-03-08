#include <iostream>


using namespace std;


int main(){
    enum Meal{breakfast,lunch,dinner};// 0,1,2 ; just giving name to numbers for making program more readable.
    cout<<"breakfast is : "<<breakfast<<endl;
    cout<<"lunch is : "<<lunch<<endl;
    cout<<"dinner is : "<<dinner<<endl;
    int a = breakfast;
    Meal b = lunch;
    cout<<"a is : "<<a<<endl;
    cout<<"b is : "<<b<<endl;
    return 0;
}