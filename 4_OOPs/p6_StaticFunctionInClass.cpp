#include <iostream>

using namespace std;

class Employee{
    int id; 
    string name; 
    int salary; 
    static int count; 
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
        static void getCount(void){
            //cout<<id; Error: static method can only access static variables.
            cout<<"Total No. of Employees so far is : "<<count<<endl;
        }
};

int Employee :: count;

int main(){
    Employee emp1,emp2,emp3;
    emp1.set(1001,"Arnav Kaushik",100000);
    emp1.show();
    emp2.set(1002,"Bhanu Teja",120000);
    emp2.show();
    emp3.set(1003,"Chatanya Sastri",140000);
    emp3.show();
    cout<<endl;
    Employee::getCount(); // calling static functions, no object needed.
    return 0;
}