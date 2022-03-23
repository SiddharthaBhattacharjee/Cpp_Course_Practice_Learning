#include <iostream>
using namespace std;

/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes, also add % and Pythogorian(a^2 + b^2) operation to it.
    
    Answer the following Question:
    Q1. What type of Inheritance are you using? - Multiple Inheritance
    Q2. Which mode of Inheritance are you using? - Private
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented? - The simple Calculator and Scientific Calculator methods are not repeated in code.
*/

class SimpleCalculator{
    protected:
        int a,b;
    public:
        void setVals_SC(int x,int y){
            a=x;
            b=y;
        }
        void calc_SC(){
            cout<<a<<"+"<<b<<" = "<<a+b<<endl;
            cout<<a<<"-"<<b<<" = "<<a-b<<endl;
            cout<<a<<"*"<<b<<" = "<<a*b<<endl;
            cout<<a<<"/"<<b<<" = "<<(float)a/(float)b<<endl;
        }
};

class ScientificCalculator{
    protected:
        int r,s;
    public:
        void setVals_SciC(int x,int y){
            r=x;
            s=y;
        }
        int pow(int x,int y){
            int p=1;
            while(y>0){
                p*=x;
                y--;
            }
            return p;
        }
        int mod(int i){
            if(i>=0){
                return i;
            }
            else{
                return -i;
            }
        }
        int fact(int n){
            int f=1;
            while(n>1){
                f *= n;
                n--;
            }
            return f;
        }
        float inv(int a){
            return 1/(float)a;
        }
        void calc_SciC(){
            cout<<r<<"^"<<s<<" = "<<pow(r,s)<<endl;
            cout<<"|"<<r<<"| = "<<mod(r)<<" , |"<<s<<"| = "<<mod(s)<<endl;
            cout<<r<<"! = "<<fact(r)<<" , "<<s<<"! = "<<fact(s)<<endl;
            cout<<"1/"<<r<<" = "<<inv(r)<<" , 1/"<<s<<" = "<<inv(s)<<endl;
        }
};

class HybridCalculator : SimpleCalculator,ScientificCalculator{
    int m,n;
    public:
        void setVals_HC(int av,int bv){
            m = av;
            n = bv;
            setVals_SC(av,bv);
            setVals_SciC(av,bv);
        }
        void Calc_HC(){
            calc_SC();
            cout<<m<<"%"<<n<<" = "<<m%n<<endl;
            calc_SciC();
            cout<<m<<"^2 + "<<n<<"^2 = "<<(m*m)+(n*n)<<endl;
        }
};


int main(){
    HybridCalculator hc;
    hc.setVals_HC(-4,3);
    hc.Calc_HC();
    return 0;
}