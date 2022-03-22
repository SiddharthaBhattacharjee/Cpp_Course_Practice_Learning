#include <iostream>

using namespace std;

class Employee{
    int empID;
    float salary;
    public:
        void setData(int id,float sal){
            empID = id;
            salary = sal;
        }
        void showData(){
            cout<<"Emp ID : "<<empID<<" , Salary : "<<salary<<endl;
        }
};
class Assistant{
    int SuperiorID;
    int assistanceNo;
    public:
        void setAstntData(int id1,int id2){
            SuperiorID = id1;
            assistanceNo = id1;
        }
        void showAstntData(){
            cout<<"Superior ID : "<<SuperiorID<<" , Assistance No. : "<<assistanceNo<<endl;
        }
};

class JrDeveloper : public Employee, public Assistant{
    public:
        string name;
        void setJDData(int eid,float sal,int sid,int ano,string n){
            name = n;
            setAstntData(sid,ano);
            setData(eid,sal);
        }
        void showJDData(){
            cout<<"Employee Name : "<<name<<endl;
            showData();
            showAstntData();
        }
};

int main(){
    JrDeveloper Siddharth;
    Siddharth.setJDData(100404,4000000.00,20195,211003,"Siddhartha Bhattacharjee");
    Siddharth.showJDData();
    return 0;
}