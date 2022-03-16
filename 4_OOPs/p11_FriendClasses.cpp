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
        void RealComplexSum(complex o1, complex o2);
        void ImagComplexSum(complex o1, complex o2);
        //out defined as class members a and b don't exist yet.
};

class complex{
    int a,b;
    friend class sum;// this time, whole class is friend.
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
void sum :: RealComplexSum(complex o1,complex o2){
            cout<<o1.a+o2.a<<endl;
        }
void sum :: ImagComplexSum(complex o1,complex o2){
            cout<<o1.b+o2.b<<endl;
        }



int main(){
    complex o1,o2;
    o1.set(2,5);
    o1.display();
    o2.set(3,7);
    o2.display();
    sum s;
    s.ComplexSum(o1,o2);
    s.RealComplexSum(o1,o2);
    s.ImagComplexSum(o1,o2);
    return 0;
}