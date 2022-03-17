#include <iostream>

using namespace std;

class Y;//had to forward declare

class X{
    int dat1;
    public:
        void setDat1(int x){
            dat1 = x;
        }
    friend void sum(X, Y);//since Y still doesnt exist, so we forward declared Y.
};

class Y{
    int dat2;
    public:
        void setDat2(int y){
            dat2 = y;
        }
        friend void sum(X,Y);
};

void sum(X o1, Y o2){
    cout<<"Sum of data of X and Y object is : "<<o1.dat1+o2.dat2<<endl;
}

int main(){
    X x;
    x.setDat1(3);
    Y y;
    y.setDat2(5);
    sum(x,y);
    return 0;
}