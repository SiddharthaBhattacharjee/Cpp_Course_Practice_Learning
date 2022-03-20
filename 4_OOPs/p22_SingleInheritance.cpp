#include <iostream>

using namespace std;

//Heavily commented for later reference of topic : private and public inheritance (in single inheritance)

class Base{//base class, derived by Derived and Derived2 , publically and Privately.
    int dat1;//private data won't be inherited by derived class.
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


class Derived : public Base{//publically inherited derived class
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
    return ((getDat1()+dat2+dat3)/prop);// running getDat1() since Derived cant access dat1(private of base)
}
void Derived :: setDat3(int d3){
    dat3 = d3;
}
int Derived :: getDat3(){
    return dat3;
}


class Derived2 : Base{//privately inherited derived class
    int dat3;
    public:
        int prop;
        Derived2(){}
        Derived2(int d1,int d2,int d3,int p){
            setData(d1,d2);
            dat3 = d3;
            prop = p;
        }
        int process();
        int getDat3();
        void setDat3(int d3);
};
//methods of Derived2
int Derived2 :: process(){
    return ((getDat1()+dat2+dat3)/prop);// running getDat1() since Derived cant access dat1(private of base)
}
void Derived2 :: setDat3(int d3){
    dat3 = d3;
}
int Derived2 :: getDat3(){
    return dat3;
}

int main(){
    // BASE CLASS CASE
    Base b1;
    b1.setData(3,5);
    //cout<<"b1{dat1} : "<<b1.dat1; // Error , d1 is private
    cout<<"b1{dat1} : "<<b1.getDat1()<<endl;//public process of base, this will work
    cout<<"b1{dat2} : "<<b1.dat2<<endl;//public member of base object

    //PUBLIC INHERITANCE CASE
    Derived D1;
    D1 = Derived(7,5,9,3);
    cout<<"Process of D1: "<<D1.process()<<endl;//uses dat1,dat2,dat3,dat4
    //cout<<"D1{dat1} : "<<D1.dat1; // Error , Derived cant acces pvt of base
    cout<<"D1{dat1} : "<<D1.getDat1()<<endl;// CAN access, since public of base is public in derived in public inheritance; wont work for pvt ineritance
    cout<<"D1{dat2} : "<<D1.getDat2()<<endl;//  "                 "          same as above          "                 "
    //cout<<"D1{dat3} : "<<D1.dat3; // Error, dat3 is pvt member of derived
    cout<<"D1{dat3} : "<<D1.getDat3()<<endl;//public method of derived, hence will work
    cout<<"D1{dat4} : "<<D1.prop<<endl; // d4 or prop is public member of derived

    //PRIVATE INHERITANCE CASE
    Derived2 D2;
    D2 = Derived2(7,5,9,3);
    cout<<"Process of D2: "<<D2.process()<<endl;//uses dat1,dat2,dat3,dat4
    //cout<<"D1{dat1} : "<<D2.dat1; // Error , Derived cant acces pvt of base
    //cout<<"D1{dat1} : "<<D2.getDat1();// CAN'T access, since public of base is private of derived in private inheritance; will work for public.
    //cout<<"D1{dat2} : "<<D2.getDat2();//  "                 "            same as above        "                 "
    //cout<<"D1{dat3} : "<<D2.dat3; // Error, dat3 is pvt member of derived
    cout<<"D2{dat3} : "<<D2.getDat3()<<endl;//public method of derived, hence will work
    cout<<"D2{dat4} : "<<D2.prop<<endl; // d4 or prop is public member of derived
    cout<<"For D2, dat1 and dat2 cannot be accessed"<<endl;//since public of base is pvt of derived in pvt inheritance
    return 0;
}
