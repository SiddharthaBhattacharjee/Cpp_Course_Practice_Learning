#include <iostream>

using namespace std;

/*

Syntax for initialization list in constructor :

constructor(arguement list) : initialization-section
{
    assignment/code
}
eg:

case1:
class Test{
    int a;
    int b;
    public:
        Test(int i,int j) : a(i), b(j)
        {
            cout<<"Constructor Executed"<<endl;
            cout<<"value of a: "<<a<<" , b: "<<b<<endl;
        }
};

case2:
class Test{
    int a;
    int b;
    public:
        Test(int i,int j) : a(i), b(i+j)
        {
            cout<<"Constructor Executed"<<endl;
            cout<<"value of a: "<<a<<" , b: "<<b<<endl;
        }
};

wrong case:
case2:
class Test{
    int a;
    int b;
    public:
        Test(int i,int j) : b(i), a(a+j)//won't work since a is initialized before b.
        {
            cout<<"Constructor Executed"<<endl;
            cout<<"value of a: "<<a<<" , b: "<<b<<endl;
        }
};
*/

class Test{
    int a;
    int b;
    public:
        Test(int i,int j) : a(i), b(a+j)
        {
            cout<<"Constructor Executed"<<endl;
            cout<<"value of a: "<<a<<" , b: "<<b<<endl;
        }
};

int main(){
    Test t(1,2);
    return 0;
}