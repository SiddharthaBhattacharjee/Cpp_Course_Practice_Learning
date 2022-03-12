/*

Statement : Print the following pattern for given user input (if user input is even, add 1 to it)

n=5

  *  
 *** 
*****
 ***
  *

n=4, n++; ==> n=5
------------------------------------------

rough work

 pat   i   x      init space
  *    1   1      2
 ***   2   3      1
*****  3   5==n   0
 ***   4   3      1
  *    5   1      2

space function: f(7) = 3, f(5) = 2, f(3) = 1, f(1) = 0 ; f(x) = x-((x+1)/2);



*/

#include <iostream>


using namespace std;


int main(){
    int n;
    cout<<"Enter pattern Number (odd number) : ";
    cin>>n;
    if(n%2==0){
        n++;
    }
    int sp = n-((n+1)/2);
    for(int i=1;i<=n;i+=2){
        for(int x=0;x<sp;x++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        sp--;
        cout<<endl;
    }
    sp++;
    for(int i=n-2;i>=1;i-=2){
        sp++;
        for(int x=0;x<sp;x++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}