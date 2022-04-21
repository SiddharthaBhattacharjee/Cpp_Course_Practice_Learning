#include <iostream>

using namespace std;

class product{
    int id;
    float price;
    public:
        void setData(int a,float b){
            id=a;
            price=b;
        }
        void getData(void){
            cout<<"The id is: "<<id<<endl;
            cout<<"The price is: "<<price<<endl;
        }
};

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    product * products = new product[size];
    product * ptr = products;
    for(int i=0;i<size;i++){
        int p,q;
        cout<<"Enter the id and price of the product: ";
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    ptr = products;
    for(int i=0;i<size;i++){
        ptr->getData();
        ptr++;
    }
    return 0;
}