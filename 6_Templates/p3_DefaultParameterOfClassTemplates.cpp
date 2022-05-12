#include <iostream>

using namespace std;

template < class T1=string ,class T2=string>
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
    myClass<> obj1( "name","Siddhartha");
    myClass<> obj2("surname","Bhattacharjee");
    myClass<string,int> obj3("age",20);
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}
