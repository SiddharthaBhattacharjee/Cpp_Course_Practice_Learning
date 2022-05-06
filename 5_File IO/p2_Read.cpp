#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string st;
    //Opening Files using consteuctor and reading it.
    ifstream in("test1.txt"); // Read Operator
    cout<<"Content of file test1.txt : ";
    in>>st;// gets single word (printing This)
    cout<<st;
    getline(in,st);//gets the whole line (printing wole line -This | since cursor )
    cout<<st;
    return 0;
}