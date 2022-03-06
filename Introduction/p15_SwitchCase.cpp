#include <iostream>


using namespace std;


int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    switch (age)
    {
    case 13:
        cout<<"You can now use social media";
        break;
    case 18:
        cout<<"You can now vote";
        break;
    case 22:
        cout<<"You can now marry";
        break;
    case 55:
        cout<<"You are now a cenior citizen";
        break;
    default:
        cout<<"Nothing special this year";
        break;
    }
    return 0;
}