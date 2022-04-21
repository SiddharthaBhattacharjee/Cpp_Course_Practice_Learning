#include <iostream>

using namespace std;

class complex{
    int real;
    int imag;
    public:
        void getData(void){
            cout<<"Enter real and imaginary part: ";
            cin>>real>>imag;
        }
        void setData(int r,int i){
            real=r;
            imag=i;
        }
        void showData(void){
            cout<<"Real part: "<<real<<endl;
            cout<<"Imaginary part: "<<imag<<endl;
        }
};

int main(){
    // complex c1;
    // complex * ptr = &c1;
    complex * ptr = new complex();
    (* ptr).setData(10,20);
    (* ptr).showData();
    return 0;
}