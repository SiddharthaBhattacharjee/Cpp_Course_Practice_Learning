#include <iostream>


using namespace std;

typedef union money{
    float dollar;
    float pounds;
    int rupees;
    double taka;
}mon;
//only 1 of the currencies can be set at a time, on setting other, earlier one will loose its data and return garbage value if called.

int main(){
    mon myMoney;
    mon TomsMoney;
    mon KarensMoney;
    mon RotonsMoney;
    myMoney.rupees = 20000;
    TomsMoney.pounds = 589.66;
    KarensMoney.dollar = 2000;
    RotonsMoney.taka = 100000;
    cout<<"My money : "<<myMoney.rupees<<endl;
    cout<<"Toms money : "<<TomsMoney.pounds<<endl;
    cout<<"Karens money : "<<KarensMoney.dollar<<endl;
    cout<<"Rotons money : "<<RotonsMoney.taka<<endl;
    cout<<endl;
    //updating
    myMoney.dollar = 4000;
    cout<<"old My Money : "<<myMoney.rupees<<endl;//gives garbage value since it no longer exists.
    cout<<"New My Money : "<<myMoney.dollar<<endl;
    return 0;
}