#include <iostream>

using namespace std;

class binary{
    string s;
    void check_bin(void);
    
    public:
        void read(void);
        void complement(void);
        void display(void);
};

void binary :: read(){
    cout<<"Enter a binary number : ";
    cin>>s;
    check_bin();// calls checkbin here
}

void binary :: check_bin(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Invalid binary number !";
            exit(0);
        }
    }
}

void binary :: complement(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='1'){
            s.at(i) = '0';
        }
        else{
            s.at(i) = '1';
        }
    }
    cout<<"Complemented binary !"<<endl;
    display();// calls display here
}

void binary :: display(){
    cout<<"Displaying your binary number : "<<s<<endl;
}

int main(){
    binary b;
    b.read();
    b.display();
    b.complement();
    return 0;
}