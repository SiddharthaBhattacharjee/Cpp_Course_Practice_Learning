#include <iostream>

using namespace std;

class complex{
    int a,b;
    public:
        complex(){// default constructor
            a=0;
            b=0;
        }
        complex(int x){// constructor with only real part 
            a=x;
            b=0;
        }
        complex(int x,int y){// constructor with both real and imaginary part
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
    complex A;
    complex B(4);
    complex C(3,5);
    A.display();
    B.display();
    C.display();
    return 0;
}