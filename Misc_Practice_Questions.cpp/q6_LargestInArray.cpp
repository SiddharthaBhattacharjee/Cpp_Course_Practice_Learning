//statement : Write a C++ program to find the largest element of a given array of integers

#include <iostream>


using namespace std;

int biggest(int arr[], int size){
    int big = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>big){
            big = arr[i];
        }
    }
    return big;
}

int main(){
    int arr[] = {11,55,3,4,68,13,84,29,72,93,77,24,86};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"The biggest number in array is : "<<biggest(arr,size);
    return 0;
}