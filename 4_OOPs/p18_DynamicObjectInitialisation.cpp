#include <iostream>

using namespace std;

class InterestCalc{
    int principle;
    int years;
    float rate;
    float amount;

    public:
        InterestCalc(){}//default constructor, for initializing the objects without args
        InterestCalc(int p,int t,float r);//float r will take interest rate in fraction i.e. 0.06
        InterestCalc(int p,int t,int r);// int r will take interest rate in % like 6.
        void show(void);
};

InterestCalc :: InterestCalc(int p, int t, float r){
    principle = p;
    years = t;
    rate = r;
    amount = p;
    for(int i=0;i<t;i++){
        amount *= (1+rate);
    }
}

InterestCalc :: InterestCalc(int p, int t, int r){
    principle = p;
    years = t;
    rate = float(r)/100;
    amount = p;
    for(int i=0;i<t;i++){
        amount *= (1+rate);
    }
}

void InterestCalc :: show(){
    cout<<"Principle Amount : "<<principle<<" , Interest rate : "<<rate<<" , Time : "<<years<<"years"<<endl;
    cout<<"Return Amount : "<<amount<<endl;
}

int main(){
    InterestCalc c1,c2,c3;
    int p,t;
    float r;
    int R;

    cout<<"Enter the value of P , T and R : ";
    cin>>p>>t>>R;
    c1 = InterestCalc(p,t,R);
    c1.show();

    cout<<"Enter the value of P , T and R : ";
    cin>>p>>t>>r;
    c2 = InterestCalc(p,t,r);
    c2.show();
    
    return 0;
}