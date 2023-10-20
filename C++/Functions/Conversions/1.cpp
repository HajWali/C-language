#include <iostream>
#include <math.h>
using namespace std;
//Binary To Decimal

 int bnryToDeciml(int n)//111
 {
    int sum = 0;
    int x = 1;
    while(n>0)
    {
        int Ldigit = n%10;
        sum += Ldigit * x;
        x *= 2;
        n /= 10;
    }
    return sum;
 }

int main() 
    {
    int n = 111;
    cout <<bnryToDeciml(n);
    return 0;
}