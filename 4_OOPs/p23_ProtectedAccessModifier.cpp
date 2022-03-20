#include <iostream>

using namespace std;

class Base{
    protected:
        int dat1;
    public:
        int dat2;
        Base(){}
        Base(int d1,int d2){
            dat1 = d1;
            dat2 = d2;
        }
        void setData(int d1,int d2);
        int getDat1();
        int getDat2();
};
//methods of Base
void Base :: setData(int d1,int d2){
    dat1=d1;
    dat2=d2;
}
int Base :: getDat1(){
    return dat1;
}
int Base :: getDat2(){
    return dat2;
}


class Derived : protected Base{
    int dat3;
    public:
        int prop;
        Derived(){}
        Derived(int d1,int d2,int d3,int p){
            setData(d1,d2);
            dat3 = d3;
            prop = p;
        }
        int process();
        int getDat3();
        void setDat3(int d3);
};
//methods of Derived
int Derived :: process(){
    return ((dat1+dat2+dat3)/prop); //this time not running getDat1() since Derived can access dat1(protected can be inherited)
}
void Derived :: setDat3(int d3){
    dat3 = d3;
}
int Derived :: getDat3(){
    return dat3;
}


/*
Notes:

    @ Protected -> Private + Inheritance access;

    @ This is how members will be accessed while inheriting.

    	                    |       Public Derivation   |  	Private Derivation  |     Protected Derivation
        ----------------------------------------------------------------------------------------------------                            
        Private members     |     	Not Inherited       |      	Not Inherited   |          	Not Inherited              
        Protected members   |       Protected           |        Private        |           Protected                    
        Public members      |    	Public	            |        Private        |           Protected    

*/

int main(){
    Derived d1(1,2,3,4);
    //cout<<d1.dat1; protected cant be accessed from main , can only be inherited.
    cout<<d1.process();
    return 0;
}