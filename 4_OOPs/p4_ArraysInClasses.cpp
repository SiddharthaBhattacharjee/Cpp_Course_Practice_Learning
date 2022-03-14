#include <iostream>

using namespace std;

class shop{
    int itemID[100];
    int prise[100];
    float gst[100];
    int counter=0;
    public:
        void set(void){
            cout<<"Enter Item id : ";
            cin>>itemID[counter];
            cout<<"Enter Prise : ";
            cin>>prise[counter];
            gst[counter]=0.06f;
            counter++;
        }
        void set(int id,int prs, float gstin=0.06){
            itemID[counter]=id;
            prise[counter]=prs;
            gst[counter]=gstin;
            counter++;
        }
        void displayItems(void){
            for(int i=0;i<counter;i++){
                cout<<"Item Id : "<<itemID[i]<<" , Prise : "<<prise[i]<<" , Prise with GST : "<<(float) prise[i] + (float) prise[i] * gst[i]<<endl;
            }
        }
        void updateGST(int id,float gstin){
            for(int i=0;i<counter;i++){
                if(itemID[i]==id){
                    gst[i] = gstin;
                }
            }
        }
};

int main(){
    shop shop1;
    shop1.set(1001,100);
    shop1.set(1002,499);
    shop1.set(1003,9999,0.12);
    shop1.set(1004,500);
    shop1.set();
    shop1.updateGST(1002,0.02);
    shop1.displayItems();
    return 0;
}