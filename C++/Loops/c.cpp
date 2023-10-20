#include <iostream>
using namespace std;

int main() {
    int n = 5; // Change this to the desired input value

        int space = 0;
    for(int i=n; i>=1; i--)
    {
        for(int j = 1; j<=i; j++)
        {
            cout << "*" << " ";
        }
        for(int j = 0; j<space; j++)
        {
            cout << "$" << " ";
        }
        for(int j = 1; j<=i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
        space+=2;
    }
    cout << space;
    

    int spaces = n-4;
    for(int i=1; i<=n; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            cout << "*" << " ";
        }
        for(int j = 0; j<space; j++)
        {
            cout << "$" << " ";
        }
        for(int j = 1; j<=i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
        space-=2;
    }
    



    return 0;
}
