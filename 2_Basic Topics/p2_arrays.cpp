#include <iostream>


using namespace std;


int main(){
    int Marks[] = {87,89,93,88};//initially assigned
    cout<<"marks[0] : "<<Marks[0]<<endl;
    cout<<"marks[1] : "<<Marks[1]<<endl;
    cout<<"marks[2] : "<<Marks[2]<<endl;
    cout<<"marks[3] : "<<Marks[3]<<endl;
    cout<<endl;

    int MathMarks[4];//programically assigned
    MathMarks[0]=85;
    MathMarks[1]=90;
    MathMarks[2]=92;
    MathMarks[3]=88;
    cout<<"MathMarks[0] : "<<MathMarks[0]<<endl;
    cout<<"MathMarks[1] : "<<MathMarks[1]<<endl;
    cout<<"MathMarks[2] : "<<MathMarks[2]<<endl;
    cout<<"MathMarks[3] : "<<MathMarks[3]<<endl;
    cout<<endl;
    
    //you can change the value of array
    Marks[0] = 97;
    cout<<"updated Marks[0] : "<<Marks[0]<<endl;
    return 0;
}