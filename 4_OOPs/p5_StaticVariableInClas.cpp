#include <iostream>

using namespace std;

class Employee{
    int id; // unique for all objects.
    string name; // unique for all objects.
    int salary; // unique for all objects.
    static int count; // ---> BUT THIS IS  same for all objects <---
    public:
        void set(int empid,string empname, int sal){
            id = empid;
            name = empname;
            salary = sal;
            count++;
        }
        void show(void){
            cout<<"Employee ID : "<<id<<" , Name : "<<name<<" , Salary : "<<salary<<" || \n Total no. of employees : "<<count<<endl;
        }
};

int Employee :: count; // default value is zero, same for all objects.

int main(){
    Employee emp1,emp2,emp3;
    emp1.set(1001,"Arnav Kaushik",100000);
    emp1.show();
    emp2.set(1002,"Bhanu Teja",120000);
    emp2.show();
    emp3.set(1003,"Chatanya Sastri",140000);
    emp3.show();
    return 0;
}