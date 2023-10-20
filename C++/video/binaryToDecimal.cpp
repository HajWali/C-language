#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n) //111
{
    int ans = 0;
    int x = 1;
    while(n>0)
        {
            int y = n%10; //1--1--1
            ans+= x*y; //1--3--3
            x*=2; //2--4--8
            n/=10; //11--1--0
        }
    return ans;
}

int octaToDecimal(int n) 
{
    int ans = 0;
    int x = 1;
    while(n>0)
        {
            int y = n%10; 
            ans+= x*y; 
            x*=8; 
            n/=10; 
        }
    return ans;
}
    
  

int main()
{
    int n;
    cin >> n;
    cout << hexaToDecimal(n) <<endl;

}