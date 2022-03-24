#include <iostream>

using namespace std;

class base{
    public:
        void greet(){
            cout<<"Hello There!"<<endl;
        }
};

class derived: public base{
    public:
        void greet(){//this greet will be used for derived clas objects, overrided the function.
            cout<<"Hey, How are you?"<<endl;
        }
};

int main(){
    base b;
    b.greet();
    derived d;
    d.greet();
    return 0;
}