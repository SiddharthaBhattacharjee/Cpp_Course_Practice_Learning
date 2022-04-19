#include <iostream>

using namespace std;

int sumAndProd(int arr[], int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        int prod = 1;
        for(int j = i; j < n; j++)
        {
            sum += arr[j];
            prod *= arr[j];
            if(sum == prod)
                count++;
        }
    }
    return count;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << sumAndProd(arr, n);
    return 0;
}