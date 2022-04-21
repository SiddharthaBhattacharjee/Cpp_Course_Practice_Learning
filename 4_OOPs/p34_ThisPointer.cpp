#include <iostream>

using namespace std;

class complex{
    int real;
    int imag;
    public:
        void setData(int real,int imag){
            this->real=real;
            this->imag=imag;
        }
        void showData(void){
            cout<<"Real part: "<<real<<endl;
            cout<<"Imaginary part: "<<imag<<endl;
        }
};

int main(){
    complex * ptr = new complex();
    ptr->setData(10,20);
    ptr->showData();
    return 0;
}