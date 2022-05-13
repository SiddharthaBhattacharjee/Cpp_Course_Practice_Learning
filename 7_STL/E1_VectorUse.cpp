#include <iostream>
#include <vector>

using namespace std;

void displayMarks(vector<string> names, vector<int> marks) {
    for (int i = 0; i < names.size(); i++) {
        cout << "Marks of student " << names[i] << " is : " << marks[i] << "\n";
    }
    cout << endl;
}

void getMarks(vector<string> &names, vector<int> &marks) {
    bool flag = true;
    while (flag) {
        string name;
        int mark;
        cout << "Enter a name: ";
        cin >> name;
        cout << "Enter a mark: ";
        cin >> mark;
        names.push_back(name);
        marks.push_back(mark);
        cout << "Do you want to enter another mark? (y/n): ";
        char ch;
        cin >> ch;
        if (ch == 'n' || ch == 'N') {
            flag = false;
        }
    }
}


int main(){
    vector <string> names;
    vector <int> marks;
    getMarks(names, marks);
    displayMarks(names, marks);
    return 0;
}