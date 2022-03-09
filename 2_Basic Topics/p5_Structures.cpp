#include <iostream>


using namespace std;

struct employee{
        int empID;
        char initial;
        char surnameinitial;
        float salary;
    };

int main(){
    struct employee sid;
    sid.empID=1001;
    sid.initial='S';
    sid.surnameinitial='B';
    sid.salary=4000000;

    struct employee Krishna;
    Krishna.empID=1002;
    Krishna.initial='K';
    Krishna.surnameinitial='S';
    Krishna.salary=9000000;

    cout<<"Employee details : "<<endl;
    cout<<endl;

    cout<<"Name : "<<sid.initial<<"."<<sid.surnameinitial<<" , Emp ID : "<<sid.empID<<" , Salary : "<<sid.salary<<" per anum."<<endl;
    cout<<"Name : "<<Krishna.initial<<"."<<Krishna.surnameinitial<<" , Emp ID : "<<Krishna.empID<<" , Salary : "<<Krishna.salary<<" per anum."<<endl;
    return 0;
}