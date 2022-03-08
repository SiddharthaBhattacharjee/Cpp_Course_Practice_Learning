#include <iostream>


using namespace std;

typedef struct vectors{
    int x,y,z;
    char ref;
}vect;


int main(){
    vect v1 = {1,2,3,'a'};
    vect v2 = {2,4,-5,'b'};
    cout<<"Vector "<<v1.ref<<" is : "<<v1.x<<"i + "<<v1.y<<"j + "<<v1.z<<"k."<<endl;
    cout<<"Vector "<<v2.ref<<" is : "<<v2.x<<"i + "<<v2.y<<"j + "<<v2.z<<"k."<<endl;
    return 0;
}