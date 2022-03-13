#include <iostream>

using namespace std;

class myClass{
    private:
        int a, b, c;
    public:
        int d,e;
        void setData(int a1,int b1,int c1);//declaring and defining later is possible
        void showdData(){//defining at once is also possible
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
            cout<<"Value of c is "<<c<<endl;
            cout<<"Value of d is "<<d<<endl;
            cout<<"Value of e is "<<e<<endl;
        }
};

void myClass :: setData(int a1,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    myClass obj1;
    obj1.setData(1,2,3);
    obj1.d = 4;//bublic varuiables can be accessed from main.
    obj1.e = 5;
    //obj1.a = 0; Error, since a is private and can only be accessed by class functions.
    obj1.showdData();
    return 0;
}