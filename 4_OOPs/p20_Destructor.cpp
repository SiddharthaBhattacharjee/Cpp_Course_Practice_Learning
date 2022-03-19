#include <iostream>

using namespace std;

int count = 0;

class mycls{
    public:
        mycls(){
            count++;
            cout<<"Object created , no. of objects now is : "<<count<<endl;
        }
        ~mycls(){//destructor, runs when an object is being destroyed.
            count--;
            cout<<"Object destroyed , no. of objects now is : "<<count<<endl;
        }
};

int main(){
    cout<<"Start of main"<<endl;
    mycls o1;
    // This is a code block, all memory allocated inside this code block gets destroyed when program exits this code block.
    {
        cout<<"Entered code block"<<endl;
        mycls o2,o3;
    }
    cout<<"Exited code block"<<endl;
    return 0;
}