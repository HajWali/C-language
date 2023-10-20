#include <iostream>
using namespace std;


int bnrySearch(int arr[], int n, int key)
{
    int strt= 0;
    int end = n;
    while(strt<=end)
    {
        int mid = (strt + end)/2;
        if(arr[mid] == key)
          return mid;
        else if(arr[mid] < key)
          strt = mid + 1;
        else
          end = mid - 1;
    }
    return -1;
}

int main() 
    {
    int n;
    cout << "Enter Lenght of ur Array: "<< endl;
    cin >> n;
    int arr[n];

    for(int i = 0; i<n; i++)
    {
    cout << "Enter Elements of ur Array: "<< endl;
        cin>>arr[i];
    }

    int key;
    cout << "Enter key: "<< endl;
    cin>>key;

    cout << bnrySearch(arr, n, key) <<endl;

    return 0;
}