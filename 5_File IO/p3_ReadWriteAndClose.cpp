#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int n;
    string name,age,fin,restore="",t;
    ifstream hin("data.txt");
    while(hin.eof() == 0){
        getline(hin,t);
        restore = restore + t + "\n";
        t="";
    }
    hin.close();
    ofstream hout("data.txt");
    hout<<restore;
    cout<<"Enter Number of Inputs : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Enter Name "<<i<<" : ";
        cin>>name;
        cout<<"Enter Age "<<i<<" : ";
        cin>>age;
        fin = "";
        fin = fin + name + " , " + age + " , " + to_string(100+i) + "\n";
        hout<<fin;
    }
    hout.close();
    return 0;
}