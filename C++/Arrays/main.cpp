#include <iostream>
using namespace std;

int main() 
    {
        int n;
        cout <<"Enter the Size of the array: " <<endl;
        cin >> n;

        int array[n];

        for(int i = 1; i<=n; i++)
        {
            if(i==1)
              {
                cout <<"Enter the element of your array: " <<endl;
              }
            cin >> array[i];
        }

        for(int i =1; i<=n; i++)
        {
            cout << array[i];
        }
    return 0;
}