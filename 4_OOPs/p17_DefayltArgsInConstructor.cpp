#include <iostream>

using namespace std;

class complex{
    int a,b;
    public:
        // complex(){// default constructor (No longer needed since one function with default arg covers it)
        //     a=0;
        //     b=0;
        // }
        // complex(int x){// constructor with only real part (No longer needed since one function with default arg covers it)
        //     a=x;
        //     b=0;
        // }
        complex(int x=0,int y=0){// constructor with both real and imaginary part (only 1 can do the work of 3)
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