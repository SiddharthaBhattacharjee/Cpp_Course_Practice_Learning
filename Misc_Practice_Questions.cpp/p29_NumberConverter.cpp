#include <iostream>

using namespace std;

void printBinaryOctalHexa(int x)
{
    int n=x;
    //binary representation
    int binary[100];
    int i = 0;
    while(n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    cout << "Binary representation of " << n << " is: ";
    for(int j = i - 1; j >= 0; j--)
        cout << binary[j];
    cout << endl;
    
    //octal representation
    n=x;
    int octal[100];
    int j = 0;
    while(n > 0)
    {
        octal[j] = n % 8;
        n = n / 8;
        j++;
    }
    cout << "Octal representation of " << n << " is: ";
    for(int k = j - 1; k >= 0; k--)
        cout << octal[k];
    cout << endl;
    
    //hexadecimal representation
    n=x;
    int hexa[100];
    int k = 0;
    while(n > 0)
    {
        hexa[k] = n % 16;
        n = n / 16;
        k++;
    }
    cout << "Hexadecimal representation of " << n << " is: ";
    for(int l = k - 1; l >= 0; l--)
    {
        if(hexa[l] < 10)
            cout << hexa[l];
        else
        {
            if(hexa[l] == 10)
                cout << "A";
            else if(hexa[l] == 11)
                cout << "B";
            else if(hexa[l] == 12)
                cout << "C";
            else if(hexa[l] == 13)
                cout << "D";
            else if(hexa[l] == 14)
                cout << "E";
            else if(hexa[l] == 15)
                cout << "F";
        }
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printBinaryOctalHexa(n);

    return 0;
}