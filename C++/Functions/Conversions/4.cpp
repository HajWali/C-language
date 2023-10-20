#include <iostream>
#include <math.h>
using namespace std;

//Decimal To Biary

int decToBnry (int num) //75
{
    int binary = 0;
    int base = 1;
    while(num>0) //100
    {
        int rmndr = num % 2; // 0--0--1--0-0--1
        binary += base * rmndr; // 0--0--100--100100;
        base *= 10; //10--100--1000--10,000--1,00,000
        num /= 2; //50--25--12--6--3
    }
    return binary;
}


int decToOcta (int num) //75
{
    int octal = 0;
    int base = 1;
    while(num>0) // 20
    {
        int rmndr = num % 8; // 2--2
        octal += base * rmndr; // 2--2
        base *= 10; // 10--100
        num /= 8; // 2--02
    }
    return octal;
}

int main() 
    {
    int num = 10;
    cout << decToOcta(num) <<endl;

    return 0;
}