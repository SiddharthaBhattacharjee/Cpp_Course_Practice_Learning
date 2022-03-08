#include <iostream>

using namespace std;

int main(){
    int a = 106;// a is integer variable and stores value 106.
    int* b = &a;// b is integer pointer variable and stores address of a in memory.
    //&a gives memory location of variable a.

    //& --> Address of operator
    //* --> dereference

    cout<<"Address of a is "<<b<<endl;
    cout<<"Address of a is "<<&a<<endl;

    cout<<"value stored in b address is "<<*b<<endl;

    int** c = &b;// a pointer that points to a pointer pointing to a variable i.e. int** --> int* --> int.

    cout<<"Address of b is "<<c<<endl;
    cout<<"Address of a is "<<*c<<endl;

    cout<<"value stored in a using c pointer is "<<**c<<endl;

    return 0;
}