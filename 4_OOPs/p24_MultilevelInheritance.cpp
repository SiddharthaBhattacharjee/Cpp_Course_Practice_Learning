#include <iostream>

using namespace std;

class Student{
    protected:
        int Rollno;
    public:
        void setRollno(int r){
            Rollno=r;
        }
        void showRollno(){
            cout<<"Roll no. of student is : "<<Rollno<<endl;
        }
};

class Exam : public Student{
    protected:
        float maths;
        float science;
    public:
        void setMarks(float m,float s){
            maths = m;
            science = s;
        }
        void show_Marks(){
            cout<<"Maths Marks : "<<maths<<endl;
            cout<<"Science Marks : "<<science<<endl;
        }
};

class Results : public Exam{
    protected:
        float rest;
    public:
        void showRes(){
            showRollno();
            show_Marks();
            rest = (maths+science)/2;
            cout<<"Result is : "<<rest<<"%"<<endl;
        }
};

int main(){
    Results student1;
    student1.setRollno(420);
    student1.setMarks(97.0,90.0);
    student1.showRes();
    return 0;
}