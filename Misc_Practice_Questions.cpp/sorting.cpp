#include <iostream>


using namespace std;

template <size_t n>
void sort(int (&arr)[n]){
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
}

int main(){
    int arr1[] = {2,4,1,5,7,6,8,9,3};
    sort(arr1);
    for(int i:arr1){
        cout<<i<<",";
    }
    return 0;
}