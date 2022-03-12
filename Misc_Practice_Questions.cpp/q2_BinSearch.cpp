#include <iostream>


using namespace std;

template <size_t n>
int search(int (&arr)[n],int a){
    int l = n;
    for(int i=1;i<l;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    int first = 0;
    int last = l-1;
    while(first<=last){
        int mid = (first+last)/2;
        if(arr[mid]==a){
            return mid;
        }
        else if(arr[mid]<a){
            first = mid+1;
            continue;
        }
        else{
            last = mid-1;
            continue;
        }
    }
    return -1;
}

int main(){
    int n;
    int arr[] = {4,5,2,1,3,9,7,6,8,10};
    cout<<"Enter Number to be searched : ";
    cin>>n;
    cout<<"Position of "<<n<<" is : "<<search(arr,n);
    return 0;
}