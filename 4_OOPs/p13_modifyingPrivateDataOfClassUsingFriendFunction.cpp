#include <iostream>

using namespace std;
class Y;

class X{
    int dat1;
    public:
        void setDat1(int x){
            dat1 = x;
        }
        void showDat1(){
            cout<<"Dat1 : "<<dat1<<endl;
        }
    friend void swapData(X & o1,Y & o2);
};

class Y{
    int dat2;
    public:
        void setDat2(int y){
            dat2 = y;
        }
        void showDat2(){
            cout<<"Dat2 : "<<dat2<<endl;
        }
    friend void swapData(X & o1,Y & o2);
};

void swapData(X & o1, Y & o2){//calling by reference, rest same as p12.
    int temp = o1.dat1;
    o1.dat1 = o2.dat2;
    o2.dat2 = temp;
}

int main(){
    X x;
    Y y;
    x.setDat1(5);
    y.setDat2(9);
    cout<<"Before Swap : "<<endl;
    x.showDat1();
    y.showDat2();
    cout<<"After Swap : "<<endl;
    swapData(x,y);
    x.showDat1();
    y.showDat2();
    return 0;
}