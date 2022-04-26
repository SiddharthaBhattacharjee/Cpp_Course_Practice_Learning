#include <iostream>

using namespace std;

class baseClass{
    public:
        int baseData = 1;
        virtual void show(void){
            cout<<"1) Base class data: "<<baseData<<endl;
        }
};

class derivedClass : public baseClass{
    public:
        int derivedData = 2;
        void show(void){
            cout<<"2) Base class data: "<<baseData<<endl;
            cout<<"2) Derived class data: "<<derivedData<<endl;
        }
};

int main(){
    baseClass * bc_ptr; // base class pointer created
    derivedClass der_obj; // derived class object created
    bc_ptr=&der_obj; // derived class object is assigned to base class pointer
    return 0;
}