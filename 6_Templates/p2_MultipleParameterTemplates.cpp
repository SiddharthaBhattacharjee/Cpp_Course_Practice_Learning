#include <iostream>

using namespace std;

template <class T1, class T2>
class myClass{
    T1 data1;
    T2 data2;
    public:
        myClass(T1 data1, T2 data2){
            this->data1 = data1;
            this->data2 = data2;
        }
        void display(){
            cout << this->data1 << " , " << this->data2 << endl;
        }
};

int main(){
    myClass<string,string> obj1("name", "Siddhartha");
    myClass<string,int> obj2("age", 20);
    obj1.display();
    obj2.display();
    return 0;
}