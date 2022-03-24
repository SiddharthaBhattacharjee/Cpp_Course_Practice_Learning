#include <iostream>

using namespace std;

class base1{
    public:
        void greet(){
            cout<<"Hello There!"<<endl;
        }
};

class base2{
    public:
        void greet(){
            cout<<"Hey, How are you?"<<endl;
        }
};

class derived : public base1, public base2{
    public:
        void greet(){// Ambiguity Resolution.
            base1 :: greet();
        }
};

int main(){
    base1 b1;
    b1.greet();
    base2 b2;
    b2.greet();
    derived d;
    d.greet();
    return 0;
}