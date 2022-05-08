#include <iostream>

using namespace std;

template <class T>
class Vector{
    int size;
    public:
    T * arr;
        Vector(int s){
            size = s;
            arr = new T[size];
        }
        T dotProduct(Vector &v){
            T sum = 0;
            for(int i=0;i<size;i++){
                sum += arr[i]*v.arr[i];
            }
            return sum;
        }
};

int main(){
    Vector<int> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;

    Vector<int> v2(4);
    v2.arr[0] = 1;
    v2.arr[1] = 2;
    v2.arr[2] = 3;

    cout << v1.dotProduct(v2)<<endl;

    Vector<float> v3(3);
    v3.arr[0] = 4.5;
    v3.arr[1] = 3.5;
    v3.arr[2] = 1.5;

    Vector<float> v4(4);
    v4.arr[0] = 1.5;
    v4.arr[1] = 2.5;
    v4.arr[2] = 3.5;

    cout << v3.dotProduct(v4);
    return 0;
}