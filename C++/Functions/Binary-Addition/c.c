#include <iostream>
using namespace std;

//Binary-Addition

int bnrySum(int a, int b)
{
    int fSum = 0;
    int carry = 0;
    int bitPosi = 1;

    while(a > 0 || b>0 || carry)//10101---11010
    {
        int bitA = a % 10;
        int bitB = b % 10;

        int sum = bitA + bitB;
        carry = sum / 2;
        fSum += (sum % 2) * bitPosi;

        a /= 10;
        b /= 10;
        bitPosi *= 10;
    }
    return fSum;
}

int main() 
    {
    int a, b;
    cout << "Enter the first binary number: "<<endl;
    cin >> b;
    cout << "Enter the second binary number: "<<endl;
    cin >> b;
    int sum = bnrySum(a, b);

    cout <<"Sum in Bianry is: " <<sum << endl;

    return 0;
}