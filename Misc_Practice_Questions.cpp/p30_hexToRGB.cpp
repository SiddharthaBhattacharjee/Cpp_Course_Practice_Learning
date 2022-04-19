#include <iostream>

using namespace std;

void hexToRGB(int hex)
{
    int r, g, b;
    r = (hex & 0xFF0000) >> 16;
    g = (hex & 0xFF00) >> 8;
    b = hex & 0xFF;
    cout << "RGB values of " << hex << " are: " << r << " " << g << " " << b << endl;
}


int main(){
    int hex = 0xFF00FF;
    hexToRGB(hex);
    return 0;
}