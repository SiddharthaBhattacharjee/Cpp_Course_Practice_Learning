#include <iostream>

using namespace std;

//Statement : Take an String User input and determine if the entered String is pelindrome or not
bool isPelindrome(string s,int size){
    int l = size-1;
    bool flag = true;
    for(int i=0;i<=l;i++){
        cout<<s[i]<<"==>"<<s[l-i]<<endl;
        if(s[i]!=s[l-i]){
            flag = false;
        }
    }
    return flag;
}

int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    int size = 0;
    for(char c:s){
        size++;
    }
    cout<<"str: "<<s<<endl;
    cout<<"size: "<<size<<endl;
    if(isPelindrome(s,size)){
        cout<<"Entered String "<<s<<" is a Pelindrome";
    }
    else{
        cout<<"Entered String "<<s<<" is NOT a Pelindrome";
    }
    return 0;
}
