#include <iostream>

using namespace std;

int main(){

    class myClass{
        public:
            int a,b;
            void sum(){
                cout<<a<<"+"<<b<<" = "<<a+b<<endl;
            }
    }obj1, obj2, obj3; // defining class with objects.

    obj1.a=1;
    obj1.b=2;
    obj1.sum();

    obj1.a=3;
    obj1.b=4;
    obj1.sum();

    obj1.a=5;
    obj1.b=6;
    obj1.sum();
    
    return 0;
}