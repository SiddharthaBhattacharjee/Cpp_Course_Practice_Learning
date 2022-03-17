#include <iostream>

using namespace std;

class complex{
    int a,b;
    public:
        complex(int x,int y);//Parametized constructor.
        void set(int x, int y){
            a=x;
            b=y;
        }
        void display(){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};

complex :: complex(int x, int y){
    a=x;
    b=y;
}

class point{
    int x,y;
    public:
        point(void){//default constructor.
            x=0;
            y=0;
        }
        void set(int a, int b){
            x=a;
            y=b;
        }
        void display(){
            cout<<"("<<x<<" , "<<y<<")"<<endl;
        }
};

int main(){
    complex C(3,5);
    C.display();
    point P;
    P.display();

    return 0;
}