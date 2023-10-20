#include <iostream>
using namespace std;

int addOdds(int num)
{
    int sum = 0;
    for(int i = 1; i<=num; i+=2)
    {
        cout << i <<endl;
        sum +=i;
    }
    return sum;
}

int main() 
    {
    int n = 10;
    int sum = 0;
    cout <<"Sum is: " << addOdds(n) << endl;
    return 0;
}