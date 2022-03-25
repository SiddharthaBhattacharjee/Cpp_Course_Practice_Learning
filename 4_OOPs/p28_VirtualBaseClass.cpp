#include <iostream>
#include <string>

using namespace std;

//class students stores rollno, name, age, std
class students
{
    int rollno;
    string name;
    int age;
    char std;
public:
    //setter for all
    void set(int r, string n, int a, char s)
    {
        rollno = r;
        name = n;
        age = a;
        std = s;
    }
    
    void display()
    {
        cout << "Rollno: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Class: " << std << endl;
    }
};

//class test extends students stores maths, science, english, SST , CS and a function that returns average of the marks
class test : virtual public students
{
protected:
    int maths;
    int science;
    int english;
    int SST;
    int CS;
public:
    //setter for all
    void set(int r, string n, int a, char s, int m, int sc, int e, int sst, int c)
    {
        students::set(r, n, a, s);
        maths = m;
        science = sc;
        english = e;
        SST = sst;
        CS = c;
    }
    
    void display()
    {
        cout << "Maths: " << maths << endl;
        cout << "Science: " << science << endl;
        cout << "English: " << english << endl;
        cout << "SST: " << SST << endl;
        cout << "CS: " << CS << endl;
    }
    float average()
    {
        return (float)(maths + science + english + SST + CS) / 5;
    }
};

//class sports extends students stores football, basketball, volleyball, tennis, chess and a function that returns average of the marks
class sports : virtual public students
{
protected:
    int football;
    int basketball;
    int volleyball;
    int tennis;
    int chess;
public:
    //setter for all
    void set(int r, string n, int a, char s, int f, int b, int v, int t, int c)
    {
        students::set(r, n, a, s);
        football = f;
        basketball = b;
        volleyball = v;
        tennis = t;
        chess = c;
    }
    void display()
    {
        cout << "Football: " << football << endl;
        cout << "Basketball: " << basketball << endl;
        cout << "Volleyball: " << volleyball << endl;
        cout << "Tennis: " << tennis << endl;
        cout << "Chess: " << chess << endl;
    }
    float average()
    {
        return (float)(football + basketball + volleyball + tennis + chess) / 5;
    }
};

//class results extend test and sports and stores total, percentage and grade
class results : public test, public sports
{
    int total;
    float percentage;
    char grade;
public:
    //function to calculate total, percentage and grade
    void calc()
    {
        total = maths + science + english + SST + CS + football + basketball + volleyball + tennis + chess;
        percentage = (float)(total / 10);
        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 80)
            grade = 'B';
        else if (percentage >= 70)
            grade = 'C';
        else if (percentage >= 60)
            grade = 'D';
        else
            grade = 'F';
        
    }
    
    //setter for all
    void set(int r, string n, int a, char s, int m, int sc, int e, int sst, int c, int f, int b, int v, int t, int c1)
    {
        test::set(r, n, a, s, m, sc, e, sst, c);
        sports::set(r, n, a, s, f, b, v, t, c1);
        calc();
    }

    void display()
    {
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
    }
    // a function to display student details and total marks,percentage and grade
    void display_all()
    {
        students::display();
        test::display();
        sports::display();
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main(){
    //create an object of results and run the input function and display all function
    results r;
    r.set(1001,"Siddhartha",18,'D',100,100,100,100,100,90,88,87,89,88);
    r.display_all();
}