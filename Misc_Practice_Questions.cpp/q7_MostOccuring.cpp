//Statement :  Write a C++ program to find the most occurring element in an array of integers. if two number have same number of occurance, return the grater number.

#include <iostream>

using namespace std;

int mostOccuring(int arr[],int size){
    int max_count = 0;
    int max_num=0;
    for(int i=0;i<size;i++){
        int count = 0;
        for(int j=0;j<size;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count>max_count){
            max_count=count;
            max_num = arr[i];
        }
        else if(count == max_count){
            if(max_num<arr[i]){
                max_num = arr[i];
            }
        }
    }
    return max_num;
}

int main(){
    int arr[] = {1,4,5,6,3,4,2,6,7,8,9,2,4,6,3,8,6,3,4,8,9,1,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Max occuring number in arr is : "<<mostOccuring(arr,size);
    return 0;
}