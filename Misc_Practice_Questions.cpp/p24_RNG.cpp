#include <iostream>

using namespace std;

int main(){
    //code to generate random number between 1 to 100
    srand(time(NULL));
    int randomNumber = rand()%100+1;
    cout<<randomNumber;
    return 0;
}