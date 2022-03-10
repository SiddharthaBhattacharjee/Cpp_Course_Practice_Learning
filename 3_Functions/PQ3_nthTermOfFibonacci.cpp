#include <iostream>


using namespace std;

int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
}

/*
Dry Run:
fib(5)
fib(4)+fib(3)
{fib(3)+fib(2)}+{fib(2)+fib(1)}
{{fib(2)+fib(1)}+{fib(1)+fib(0)}}+{{fib(1)+fib(0)}+fib(1)}
{{{{fib(1)+fib(0)}}+fib(1)}+{fib(1)+fib(0)}}+{{fib(1)+fib(0)}+fib(1)}
{{{{1+0}}+1}+{1+0}}+{{1+0}+1}
1+1+1+1+1
5

Thats inefficient compared to loop, but you look smart if you use recursion :)
*/

//series: 0,1,1,2,3,5,8,13,21,34,55,89...
//Index : 0,1,2,3,4,5,6, 7, 8, 9,10,11...

int main(){
    int n;
    cout<<"Enter the term of Fibonacci series : ";
    cin>>n;
    cout<<n<<"th Term of Fibonacci Series is : "<<fib(n);
    return 0;
}