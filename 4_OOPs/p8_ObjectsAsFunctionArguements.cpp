#include <iostream>

using namespace std;

class vector{
    int a,b,c;
    public:
        void init(int x,int y,int z){
            a=x;
            b=y;
            c=z;
        }
        void Init_sumOf(vector v1, vector v2){// takes vector objeccts as args
            a = v1.a + v2.a;//accessing elements of objects (can do that from inside class)
            b = v1.b + v2.b;
            c = v1.c + v2.c;
        }
        void show(void){
            cout<<"Vector -> "<<a<<"i + "<<b<<"j + "<<c<<"k"<<endl;
        }
};

int main(){
    vector v1,v2,v3;

    v1.init(2,4,6);
    v2.init(1,3,5);
    v3.Init_sumOf(v1,v2);//calling function with object args

    cout<<"Vector v1 is : ";
    v1.show();
    cout<<"Vector v2 is : ";
    v2.show();
    cout<<"Vector v3 is : ";
    v3.show();
    return 0;
}