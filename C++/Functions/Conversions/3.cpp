#include <iostream>
#include <math.h>
using namespace std;

//Decimal To Hexa-Decimal

string decToHexa(int num)
{
    string hexString = "";

    while(num > 0)
    {
        int rmdr = num % 16;
        char hexDigit;

        if (rmdr < 10)
    
            hexDigit = '0' + rmdr;
        else
            hexDigit = 'A' + rmdr - 10;

        hexString = hexDigit + hexString;
        num /= 16;
    }
    return hexString;
}
int main() 
    {
    int num;
    cout <<"Enter a Decimal Number: ";
    cin >> num;
    cout << decToHexa(num) <<endl;

    return 0;
}