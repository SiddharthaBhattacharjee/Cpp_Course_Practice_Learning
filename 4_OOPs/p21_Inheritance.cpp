#include <iostream>

using namespace std;

class Employee{
    public:
        int id;
        string name;
        float salary;
        Employee(int d,string n,float s){
            id = d;
            name = n;
            salary = s;
        }
        Employee(){}//needed for inheritance
};

//format -> class <derived class name> : <visibility mode(private or public, private by default)> <base class name>
/*Visibility mode : 
    private : all public member of base class become private member of derived class.
    public  : all public member of base class become public  member of derived class. 
    Note : Private members of base class are never inherited.*/
    
// alt : class programmer : public Employee{

class programmer : Employee{
    public:
        int languageCode;
        programmer(int d,string n,float s,int lc=9){
            id = d;
            name = n;
            salary = s;
            languageCode = lc;
        }
        void show(){
            cout<<"ID : "<<id<<" , Name : "<<name<<" , Salary : "<<salary<<" , Lang Code : "<<languageCode<<endl;
        }
};

int main(){
    Employee e1(1001,"Akshay Kumar",5000.00);
    cout<<"ID : "<<e1.id<<" , Name : "<<e1.name<<" , Salary : "<<e1.salary<<endl;
    programmer p1(1011,"Barry Allen",5500.00,6);
    p1.show();
    //cout<<p1.id; error : p1.id is pvt , since private inheriance, public of employee is pvt of programmer
    return 0;
}