#include <iostream>

using namespace std;

class Employee{
    int id;
    string name; 
    int salary;
    public:
        void set(int empid,string empname, int sal){
            id = empid;
            name = empname;
            salary = sal;
        }
        void set(){
            cout<<"Enter Employee id : ";
            cin>>id;
            
            cout<<"Enter Employee Name : ";
            cin>>name;

            cout<<"Enter Employee Salary : ";
            cin>>salary;

        }
        void show(void){
            cout<<"Employee ID : "<<id<<" , Name : "<<name<<" , Salary : "<<salary<<endl;
        }
};

int main(){
    // Employee emp101,emp204,emp345,emp404,emp456,emp533;
    // emp101.set(1001,"Ashneer Rathore",100000);
    // emp101.set(1002,"Bhavesh Joshi",120000);
    // emp101.set(1003,"Chaitanya Swami",150000);
    // emp101.set(1004,"Dayanand Das",130000);
    // emp101.set(1005,"Eswar Mukharjee",180000);
    // emp101.set(1006,"Farhan Aktar",110000);

    Employee CosmoTech[6];//array of objects

    //setting loop
    for(int i=0;i<6;i++){
        cout<<"For Employee "<<i+1<<" :: "<<endl;
        CosmoTech[i].set();
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;

    //display loop
    for(int i=0;i<6;i++){
        cout<<"For Employee "<<i+1<<" :: "<<endl;
        CosmoTech[i].show();
        cout<<endl;
    }

    return 0;
}