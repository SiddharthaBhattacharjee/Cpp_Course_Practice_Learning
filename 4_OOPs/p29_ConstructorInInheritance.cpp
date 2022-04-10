#include <iostream>

using namespace std;

/*
case1:
class B: public A{
    // Order of execution of constructor-> A() -> B()
};

case2:
class A: public B, public C{
    // order of execution of constructor -> B() -> C() -> A()
}

case3:
class A: public B, Virtual public C{
    // order of execution of constructor -> C() -> B() -> A() #virtual has higher preference
}
*/

class Base{
    int data;
    public:
        Base(int i){
            data = i;
            cout<<"Base class constructor called"<<endl;
        }
        void printData(void){
            cout<<"Base class data is: "<<data<<endl;
        }
};

class Base2{
    int data2;
    public:
    Base2(int i){
        data2 = i;
        cout<<"Base2 class consturctor called"<<endl;
    }
    void pritData2(void){
        cout<<"Base2 class data2 is: "<<data2<<endl;
    }
};

class derived: public Base2, public Base{// this decides order of exicution
    int data3,data4;
    public:
    derived(int i, int j, int k,int l): Base(i), Base2(j){// this order doesn't matter in order of execution
        data3 = k;
        data4 = l;
        cout<<"Derived class constructor called"<<endl;
    }
    void printData3(void){
        cout<<"Derived class data3 is: "<<data3<<endl;
        cout<<"Derived class data4 is: "<<data4<<endl;
    }
};




int main(){
    derived d(1,2,3,4);
    d.printData();
    d.pritData2();
    d.printData3();
    return 0;
}