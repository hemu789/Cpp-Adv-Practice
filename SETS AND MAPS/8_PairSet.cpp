#include <bits/stdc++.h>
using namespace std;

bool solve(int arr[], int n, int target)
 {
    unordered_set<int>s;

    for(int i=0;i<n;i++){
        if(s.find(target - arr[i])!=s.end()){
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
 }
    

int main()
{
    int n;
    cout << " enter n " << endl;
    cin >> n;

    int t;
    cout << "Enter tArget " << endl;
    cin >> t;

    int arr[n];

    cout << "Enter Element in array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (solve(arr, n, t))
    {
        cout << "Yes";
    }
    else
    {
        cout << "Not";
    }
    return 0;
}