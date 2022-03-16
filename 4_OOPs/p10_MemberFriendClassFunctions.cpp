#include <iostream>

using namespace std;

//forward declaration
class complex;

class sum{
    public:
        void sumInt(int a,int b){
            cout<<a+b<<endl;
        }
        void ComplexSum(complex o1,complex o2);//forward declared complex, because it is mentioned here before creation
        //out defined as class members a and b don't exist yet.
};

class complex{
    int a,b;
    friend void sum :: ComplexSum(complex, complex); // individual member function is friend here. (whole class can be done too, check p_11)
    public:
        void set(int x, int y){
            a=x;
            b=y;
        }
        void display(){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};

void sum :: ComplexSum(complex o1,complex o2){
            complex o3;
            o3.set(o1.a+o2.a,o1.b+o2.b);//now they exist.
            o3.display();
        }


int main(){
    complex o1,o2;
    o1.set(2,5);
    o1.display();
    o2.set(3,7);
    o2.display();
    sum s;
    s.ComplexSum(o1,o2);
    return 0;
}