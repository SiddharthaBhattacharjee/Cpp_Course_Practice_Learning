#include <iostream>

using namespace std;

class Solution {
public:
    bool isValid(string st) {
        int l = st.length();
        int flag=1;
        for(int i=0;i<l;i++){
            char c = st[i];
            if(c=='('){
                if(st[i+1]!=')'){
                    flag=0;
                }
            }
            else if(c==')'){
                if(st[i-1]!='('){
                    flag=0;
                }
            }
            else if(c=='{'){
                if(st[i+1]!='}'){
                    flag=0;
                }
            }
            else if(c=='}'){
                if(st[i-1]!='{'){
                    flag=0;
                }
            }
            else if(c=='['){
                if(st[i+1]!=']'){
                    flag=0;
                }
            }
            else if(c==']'){
                if(st[i-1]!='['){
                    flag=0;
                }
            }
        }
        if(flag){
                return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    return 0;
}