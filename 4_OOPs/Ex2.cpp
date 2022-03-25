#include <iostream>

using namespace std;

class personalDetails{
    private:
        string name;
        int age;
        string address;
        string phone;
    public:
        personalDetails(string n, int a, string ad, string ph){
            name = n;
            age = a;
            address = ad;
            phone = ph;
        }
        //getters
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        string getAddress(){
            return address;
        }
        string getPhone(){
            return phone;
        }
        //setters
        void setName(string n){
            name = n;
        }
        void setAge(int a){
            age = a;
        }
        void setAddress(string ad){
            address = ad;
        }
        void setPhone(string ph){
            phone = ph;
        }
};

class EmployeeDetails{
    private:
        string designation;
        int salary;
        string joiningDate;
    public:
        EmployeeDetails(string des, int sal, string jd){
            designation = des;
            salary = sal;
            joiningDate = jd;
        }
        //getters
        string getDesignation(){
            return designation;
        }
        int getSalary(){
            return salary;
        }
        string getJoiningDate(){
            return joiningDate;
        }
        //setters
        void setDesignation(string des){
            designation = des;
        }
        void setSalary(int sal){
            salary = sal;
        }
        void setJoiningDate(string jd){
            joiningDate = jd;
        }
};

class Employee: public personalDetails, public EmployeeDetails{
    public:
        Employee(string n, int a, string ad, string ph, string des, int sal, string jd):personalDetails(n, a, ad, ph), EmployeeDetails(des, sal, jd){
        }
        void printAllDetails(){
            cout << "Name: " << getName() << endl;
            cout << "Age: " << getAge() << endl;
            cout << "Address: " << getAddress() << endl;
            cout << "Phone: " << getPhone() << endl;
            cout << "Designation: " << getDesignation() << endl;
            cout << "Salary: " << getSalary() << endl;
            cout << "Joining Date: " << getJoiningDate() << endl;
        }
        void printEmployeeId(){
            string name = getName();
            string designation = getDesignation();
            string joiningDate = getJoiningDate();
            int randomNumber = rand() % 9999 + 1000;
            cout << "Emp ID : "<< name[0] << name[1] << designation[0] << designation[1] << joiningDate[0] << joiningDate[1] << joiningDate[3] << joiningDate[4] << randomNumber << endl;
        }
};

int main(){
    //taking personal details from user
    string name, address, phone;
    int age;
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the age: ";
    cin >> age;
    cout << "Enter the address: ";
    cin >> address;
    cout << "Enter the phone: ";
    cin >> phone;
    //taking employee details from user
    string designation, joiningDate;
    int salary;
    cout << "Enter the designation: ";
    cin >> designation;
    cout << "Enter the salary: ";
    cin >> salary;
    cout << "Enter the joining date: ";
    cin >> joiningDate;
    //create an object of Employee class
    Employee e(name, age, address, phone, designation, salary, joiningDate);
    e.printAllDetails();
    e.printEmployeeId();
    return 0;
}