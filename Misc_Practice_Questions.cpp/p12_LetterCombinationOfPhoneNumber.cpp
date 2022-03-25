#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> sts;
        vector<char> arr[digits.length()];
        int count=0;
        for(char c:digits){
            if(c=='1'){
                continue;
            }
            else if(c=='2'){
                arr[count].push_back('a');
                arr[count].push_back('b');
                arr[count].push_back('c');
            }
            else if(c=='3'){
                arr[count].push_back('d');
                arr[count].push_back('e');
                arr[count].push_back('f');
            }
            else if(c=='4'){
                arr[count].push_back('g');
                arr[count].push_back('h');
                arr[count].push_back('i');
            }
            else if(c=='5'){
                arr[count].push_back('j');
                arr[count].push_back('k');
                arr[count].push_back('l');
            }
            else if(c=='6'){
                arr[count].push_back('m');
                arr[count].push_back('n');
                arr[count].push_back('o');
            }
            else if(c=='7'){
                arr[count].push_back('p');
                arr[count].push_back('q');
                arr[count].push_back('r');
                arr[count].push_back('s');
            }
            else if(c=='8'){
                arr[count].push_back('t');
                arr[count].push_back('u');
                arr[count].push_back('v');
            }
            else if(c=='9'){
                arr[count].push_back('w');
                arr[count].push_back('x');
                arr[count].push_back('y');
                arr[count].push_back('z');
            }
            count++;

        }
        // take arrays stored in arr and combine them in zip fashion strings
        for(int i=0;i<arr[0].size();i++){
            for(int j=0;j<arr[1].size();j++){
                for(int k=0;k<arr[2].size();k++){
                    string s = {arr[0][i],arr[1][j],arr[2][k],'\0'};
                    sts.push_back(s);
                }
            }
        }
        return sts;
    }
};

int main(){ 
    Solution sol;
    vector<string> st = sol.letterCombinations("23");
    for(string s: st){
        cout<<s<<',';
    }
    return 0;
}