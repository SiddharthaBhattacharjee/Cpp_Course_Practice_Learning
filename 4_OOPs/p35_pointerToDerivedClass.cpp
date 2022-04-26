#include <iostream>

using namespace std;

class baseClass{
    public:
        int baseData;
        void setData(int data){
            baseData=data;
        }
        void show(void){
            cout<<"Base class data: "<<baseData<<endl;
        }
};

class derivedClass : public baseClass{
    public:
        int derivedData;
        void setData(int data1,int data2){
            baseClass::setData(data1);
            derivedData=data2;
        }
        void show(void){
            cout<<"Base class data: "<<baseData<<endl;
            cout<<"Derived class data: "<<derivedData<<endl;
        }
};

int main(){
    //baseClass * ptr = new derivedClass(); -> directly done

    baseClass * ptr; // base class pointer created
    derivedClass der_obj; // derived class object created
    ptr=&der_obj; // derived class object is assigned to base class pointer
    ptr->baseData = 10;
    ptr->show();
    // ptr->derivedData = 20; ILLEGAL : Since pointer is of base class, only base class members can be accessed (like polymorphism in java)

    derivedClass * ptr2;// creating derived class pointer
    ptr2=&der_obj;// assigning derived class object to derived class pointer
    ptr2->baseData = 20;
    ptr2->derivedData = 10;
    ptr2->show();
    // this time derived class members can be accessed along with base class members and show() of derivedClass will be used.
    return 0;
}