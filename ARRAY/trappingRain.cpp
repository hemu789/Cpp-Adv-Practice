#include <bits/stdc++.h>
using namespace std;

int rain(int arr[], int n){

    int res=0;

    for(int i=0;i<n;i++){

        int lmax= arr[i];

        //check for left side
        for(int j=0;j<i;j++){
            lmax = max(arr[j], lmax);
        }

        int rmax = arr[i];
        // check for rightside

        for(int j = i+1 ;j<n;j++){
            rmax= max(rmax,arr[j]);
        }

        res = res + (min(lmax, rmax ) - arr[i]);
    }

    return res;

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
    int ans = rain(arr, n);
    cout << "MAximum Difference is " << ans;
    return 0;
}