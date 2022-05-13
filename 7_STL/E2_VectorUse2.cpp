#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void getNumbers(vector<int> &numbers) {
    bool flag = true;
    while (flag) {
        int number;
        cout << "Enter a number: ";
        cin >> number;
        numbers.push_back(number);
        cout << "Do you want to enter another number? (y/n): ";
        char ch;
        cin >> ch;
        if (ch == 'n' || ch == 'N') {
            flag = false;
        }
    }
}

int findNthLargest(vector<int> numbers, int n) {
    sort(numbers.begin(), numbers.end());
    return numbers[n-1];
}

int main(){
    vector <int> numbers;
    getNumbers(numbers);
    int n;
    cout << "Enter the nth largest number: ";
    cin >> n;
    cout << "The " << n << "th largest number is: " << findNthLargest(numbers, n) << "\n";
    return 0;
}