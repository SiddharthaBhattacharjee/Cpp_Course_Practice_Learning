#include <iostream>
#include <vector>

using namespace std;

/*
@ Array Cannot be resized but vector can be resized.
@ Vector is a dynamic array.
@ cplusplus.com -> Vectors functions doc
*/

void displayMarks(vector<int> marks) {
    for (int i = 0; i < marks.size(); i++) {
        cout << "Marks of student "<< i << " is : " << marks[i] << "\n";
    }
    cout << endl;
}

int main(){
    vector <int> marks;
    bool flag = true;
    while(flag){
        int mark;
        cout << "Enter a mark: ";
        cin >> mark;
        marks.push_back(mark);
        cout << "Do you want to enter another mark? (y/n): ";
        char ch;
        cin >> ch;
        if(ch == 'n' || ch == 'N'){
            flag = false;
        }
    }
    displayMarks(marks);
    return 0;
}