#include <iostream>

using namespace std;

class complex{
    int a,b;
    public:
        complex(int x,int y){//constructor.
            a=x;
            b=y;
        }
        void set(int x, int y){
            a=x;
            b=y;
        }
        void display(){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    complex A(2,3);
    A.display();
    complex B(3,4);
    B.display();
    return 0;
}