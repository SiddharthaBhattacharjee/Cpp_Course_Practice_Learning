#include <iostream>

using namespace std;

void func(){
    cout<<"I am null Func"<<endl;
}

void func(int a){
    cout<<"I am "<<a<<" int Func"<<endl;
}

template <class T>
void func(T a){
    cout<<"I am "<<a<<" Templatized Func"<<endl;
}

int main(){
    func(4);// exact match (int -> int) takes the highest priority
    func(10.5);// No exact match , so template one is called
    func();
    return 0;
}