#include <iostream>

using namespace std;

//nth term of fibonacci series
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

//sort a passed array
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//search for a value in a sorted array
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}

int main(){
    //take an array from user
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //sort the array
    bubbleSort(arr, n);
    //print the sorted array
    cout << "The sorted array is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    //take a value from user
    int x;
    cout << "Enter the value to be searched: ";
    cin >> x;
    //search for the value in the array
    int result = binarySearch(arr, 0, n - 1, x);
    if(result == -1){
        cout << "The value is not found in the array" << endl;
    }
    else{
        cout << "The value is found at index " << result << endl;
    }
    //print the nth term of fibonacci series
    int nthTerm;
    cout << "Enter the nth term of fibonacci series: ";
    cin >> nthTerm;
    cout << "The " << nthTerm << "th term of fibonacci series is: " << fibonacci(nthTerm) << endl;
    
    return 0;
}