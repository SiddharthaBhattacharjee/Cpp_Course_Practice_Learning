#include <iostream>

using namespace std;

int main(){
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    while(x<0 || x>100 || y<0 || y>100){
        cout << "Please enter two numbers within range 0 to 100: ";
        cin >> x >> y;
    }
    int sum = x+y;
    int flag = 1;
    for(int i=2;i<=sum/2;i++){
        if(sum%i==0){
            flag = 0;
            break;
        }
    }
    if(flag){
        int result = 1;
        for(int i=1;i<=x;i++){
            result *= i;
        }
        for(int i=1;i<=y;i++){
            result /= i;
        }
        cout << "You Win, your score : " << result << endl;
    }

    else{
        cout << "You Lose, your score : 0" << endl;
    }

    return 0;
}