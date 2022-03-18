#include <iostream>

using namespace std;

class num{
    int dat;
    public:
        num(){//default constructor
            dat = 0;
        }
        num(int a){//main constructor
            dat = a;
        }
        num(num &obj){//copy constructor, takes obj of same class and replicates it to current object
            dat = obj.dat;
            cout<<"Constructor Copied!"<<endl;//we can copy obj like z1 = num(z) without defining this copy constructor,
            //but this way, we can do extra stuff with copying, like manipulating the copied data, copying selective data,
            //or printing like this.
        }
        void show(){
            cout<<"Value of dat : "<<dat<<endl;
        }
};

int main(){
    num x,y(10),z(34),z2;
    x.show();
    y.show();
    z.show();
    num z1(z);//z1 will be copy of z.
    z1.show();
    num z3 = z;// will also call our copy constructor method.
    z3.show();
    z2 = z;// will use inbuilt copy constructor , since z3 is already declared (default constructor already invoked)
    z2.show();
    return 0;
}