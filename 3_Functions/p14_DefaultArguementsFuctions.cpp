#include <iostream>


using namespace std;

int Interest(int amt, float rate=1.06){// all default arguements should be in extreme right 
    return amt*rate;
}

int main(){
    int money = 100000;
    cout<<"For Money invested "<<money<<" You get (at default rate)"<<Interest(money)<<endl;// will take rate default val
    cout<<"For Money invested "<<money<<" You get (at 12% rate)"<<Interest(money,1.12)<<endl;// will take rate=1.12
    return 0;
}