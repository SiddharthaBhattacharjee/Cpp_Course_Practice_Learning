#include <iostream>

using namespace std;

bool parityCheck(int arr1[], int arr2[], int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        int sum1 = 0;
        int sum2 = 0;
        for(int j = i; j < n; j++)
        {
            sum1 += arr1[j];
            sum2 += arr2[j];
        }
        if(sum1 % 2 == sum2 % 2)
            count++;
    }
    if(count == n)
        return true;
    else
        return false;
}

int main(){
    int arr1[] = {1, 1, 0, 1, 1};
    int arr2[] = {1, 0, 1, 0, 1};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    cout << parityCheck(arr1, arr2, n);
    
    return 0;
}