#include <iostream>
#include <math.h>
using namespace std;

//Prime Numbers btw a Given Rang

bool primeNums(int num)
{
    for(int i=2; i<= sqrt(num); i++)
    {
        if(num % i == 0)
          return false;
    }
    return true;
}
 
int main() 
    {
    int a,b;
    cout <<"Enter Rang: "<<endl;
    cin >>a>>b;

    for(int i = a; i<=b; i++)
    {
        if (primeNums(i))
          cout <<i<<" is a Prime Number"<<endl;
        else
          cout <<i<<" is a Non-Prime Number"<<endl;
    }


    return 0;
}