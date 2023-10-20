#include <iostream>
#include <climits>
using namespace std;

int main() 
    {
    int n;
    cout <<"Enter the Size of the array: " <<endl;
    cin >> n;
    int arr[n];

    for(int i = 0; i<n; i++)
        {
            cout << "Enter elements of array: " <<endl;
            cin >> arr[i];
        }

    int maxNum = INT_MIN;
    int minNum = INT_MAX;

    for(int i =0; i<n; i++)
    {
        maxNum = max(maxNum, arr[i]);
        minNum = min(minNum, arr[i]);
    }

    cout <<"Maximum Number is:  " << maxNum <<" "<<"Minimum Number is: " << minNum<<endl;
    return 0;
}