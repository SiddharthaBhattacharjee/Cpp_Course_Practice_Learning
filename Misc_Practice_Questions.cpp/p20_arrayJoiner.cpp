#include <iostream>

using namespace std;

int main(){
    char arr[] = {'1','2','3','4','5','6','7'};
    char arr2[] = {'a','b','c','d','e','f','g'};
    char res[sizeof(arr)/sizeof(char)][2];
    for(int i=0;i<sizeof(arr)/sizeof(char);i++){
        res[i][0] = arr[i];
        res[i][1] = arr2[i];
    }
    cout<<"{ ";
    for(int i=0;i<sizeof(arr)/sizeof(char);i++){
        cout<<"{"<<res[i][0]<<" , "<<res[i][1]<<"} , ";

    }
    cout<<" }";
    return 0;
}