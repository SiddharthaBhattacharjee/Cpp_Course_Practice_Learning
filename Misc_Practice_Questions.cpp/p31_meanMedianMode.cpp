#include <iostream>

using namespace std;

void meanMedianMode(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    cout << "Mean: " << sum/n << endl;
    
    //sort the array
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    //print median
    if(n % 2 == 0)
        cout << "Median: " << (arr[n/2] + arr[n/2 - 1])/2 << endl;
    else
        cout << "Median: " << arr[n/2] << endl;
    
    //print mode
    int maxCount = 0;
    int mode = arr[0];
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        if(count > maxCount)
        {
            maxCount = count;
            mode = arr[i];
        }
    }
    cout << "Mode: " << mode << endl;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    meanMedianMode(arr, n);

    return 0;
}