#include <iostream>


using namespace std;

float avg(float ,float ,float );
// can also write float avg(float a,float b,float c);
void greet();

int main(){
    greet();
    float a,b,c;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"Enter a number : ";
    cin>>b;
    cout<<"Enter a number : ";
    cin>>c;
    cout<<endl;
    cout<<"Average of the three entered number is : "<<avg(a,b,c)<<endl;
    return 0;
}

float avg(float a,float b,float c){
    float avg = (a+b+c)/3;
    return avg;
}

void greet(){
    cout<<"Hello there! How are you doing?"<<endl;
}