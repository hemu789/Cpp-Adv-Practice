#include <bits/stdc++.h>
using namespace std;

int maxProfit(int arr[], int n, int s, int e){

   // int s=0,e=n-1;

    if(e<=s){
        return 0;
    }

    int profit=0;

    for(int i=s;i<e;i++){
        for(int j=i+1;j<=e;j++){ // Max profit on right side

            if(arr[j]>arr[i]){

                int curr_profit = arr[j] - arr[i] + maxProfit(arr,n,s,i-1) + maxProfit(arr,n,j+1,e);
                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;

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

    int s=0, e=n-1;

    int arr[n];
    cout << "Enter array Element " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = maxProfit(arr, n,s,e);
    cout << "MAximum Difference is " << ans;
    return 0;
}