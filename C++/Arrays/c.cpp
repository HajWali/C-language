#include <iostream>
using namespace std;

int bSearch(int arr[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == key)
          return i;
    }
    return -1;
}

int main() 
    {
      int n;
      cout <<"Enter the Size of the array: " <<endl;
      cin >> n; 

      int arr[n];

      for(int i=0; i<n; i++)
      {
        cin >> arr[i];
      }

      int key;
      cout << "Enter key: "<<endl;
      cin >>key;

      cout << bSearch(arr, n, key) <<endl;

    return 0;
}