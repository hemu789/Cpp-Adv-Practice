#include <bits/stdc++.h>
using namespace std;

int difference(int arr[], int n)
{

   int res = arr[1]- arr[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            res = max(res, arr[j]-arr[i]);
        }
    }
    return res;
}

// void reversefun(int arr[], int n){

//     int s=0, e=n-1;

//     while(s<=e){
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }
// }

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

    int arr[n];
    cout << "Enter array Element " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = difference(arr,n);
    cout<<"MAximum Difference is "<<ans;
    return 0;
}