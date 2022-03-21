#include <iostream>

using namespace std;

/*

Statement:

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II.
 The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. 
Instead, the number four is written as IV. Because the one is before the five we subtract it making four. 
The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.

-> Given a roman numeral, convert it to an integer. <-

*/

class Solution {
public:
    int romanToInt(string s) {
        int o;
        int count=0;
        for(char c:s){
            if(c=='I'){
                if(s[count+1]=='V'){
                    o+=4;
                    s[count+1]='0';
                }
                else if(s[count+1]=='X'){
                    o+=9;
                    s[count+1]='0';
                }
                else{
                o+=1;
            }
            }
            
            else if(c=='V'){
                o+=5;
            }
            else if(c=='X'){
                if(s[count+1]=='C'){
                    o+=90;
                    s[count+1]='0';
                }
                else{
                    o+=10;
                }
                
            }
            else if(c=='L'){
                o+=50;
            }
            else if(c=='C'){
                if(s[count+1]=='M'){
                    o+=900;
                    s[count+1]='0';
                }
                else if(s[count+1]=='D'){
                    o+=400;
                    s[count+1]='0';
                }
                else{
                    o+=100;
                }
                
            }
            else if(c=='D'){
                o+=500;
            }
            else if(c=='M'){
                o+=1000;
            }
            else{
                o+=0;
            }
            count++;
        }
        return o;
    }
};

int main(){
    Solution s;
    cout<<s.romanToInt("MCMXCIV");
    return 0;
}