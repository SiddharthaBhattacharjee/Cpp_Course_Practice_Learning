#include <iostream>

using namespace std;

void sort(int arr[], int l){
    for(int i=1;i<l;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int arr[] = {2,4,3,1,5,6,8,7,9,10,13,11,12};
    sort(arr,sizeof(arr)/sizeof(int));
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<n<<"th Largest number in array is : "<<arr[(sizeof(arr)/sizeof(int))-n];
    return 0;
}