#include <bits/stdc++.h>
using namespace std;

int maximunele(int arr[], int n){

    int maxi=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    return maxi;

}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int n;
    cout << "Enter n " << endl;
    cin >> n;

    int s = 0, e = n - 1;

    int arr[n];
    cout << "Enter array Element " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // int ans = maxProfit(arr, n,s,e);
    int ans = maximunele(arr, n);
    cout << "MAximum Element is " << ans;
    return 0;
}