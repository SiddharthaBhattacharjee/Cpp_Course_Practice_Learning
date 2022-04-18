#include <iostream>

using namespace std;

string encode(string str){
    string encodedStr = "";
    for(int i=0;i<str.length();i++){
        encodedStr += (char)(str[i]+2);
    }
    return encodedStr;
}

int main(){
    cout<<encode("Hello World!");
    return 0;
}