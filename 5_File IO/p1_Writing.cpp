#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string st = "This is being written to file from a program";
    //Opening file using constructor and writing in it.
    ofstream out("test1.txt"); //Write operator
    out<<st;
    return 0;
}