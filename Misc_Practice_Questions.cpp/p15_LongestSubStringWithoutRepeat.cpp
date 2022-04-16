#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = s.length();
        int max = 0;
        int count=0;
        string f = "";
        for(char c:s){
            //check if c is in f
            if(f.find(c)==string::npos){
                f+=c;
                count++;
            }
            else{
                if(count>max){
                    max = count;
                }
                count = 1;
                f = "";
                f = f+c;
            }
        }
        if(count>max){
            max = count;
        }
        return max;
    }
};

int main(){
    return 0;
}