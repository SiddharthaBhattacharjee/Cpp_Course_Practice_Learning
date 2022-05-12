#include <iostream>

using namespace std;

template <class T>
class myClass{
    public:
    T data;
    myClass(T d){
        data = d;
    }
    void print();
};

template <class T>
void myClass<T>::print(){
    cout<<data<<endl;
}

int main(){
    myClass<int> obj1(10);
    obj1.print();
    return 0;
}