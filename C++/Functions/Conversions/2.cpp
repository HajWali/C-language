#include <bits/stdc++.h>
using namespace std;

//Hex-Dec To Decimal

int hexaToDec(string n)
{
    int hexa = 0;
    int base = 1;
    int s = n.size();

    for(int i= s-1; i >= 0; i--)
    {
        if(n[i] >= 0 && n[i] <= 9)
            hexa += base * (n[i] - '0');
        else
        {
            hexa += base * (n[i] - 'A' + 10);
        }
        base *= 16;
        
    }
    return hexa;
}
int main() 
    {
    string n = 2A9F;
    cout << hexaToDec(n) <<endl;
    return 0;
}