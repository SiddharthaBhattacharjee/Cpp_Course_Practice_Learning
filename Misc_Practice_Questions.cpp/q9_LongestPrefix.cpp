#include <iostream>
#include <vector>

using namespace std;

//Statement:Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string "".

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string init = strs[0];
        strs.erase(strs.begin());
        for(string s:strs){
            cout<<s<<endl;
            cout<<"Loop Working"<<endl;
            int i=0;
            while(i<s.length() && s[i]==init[i]){
                cout<<"il working"<<endl;
                i++;
            }
            init.resize(i);
        }
    return init;
    }
};

int main(){
    vector<string> strs;
    strs.push_back("Hello");
    strs.push_back("Heyo");
    strs.push_back("Hey");
    Solution s;
    cout<<s.longestCommonPrefix(strs);
    return 0;
}