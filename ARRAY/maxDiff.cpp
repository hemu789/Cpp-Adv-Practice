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


int OptimizedDiff(int arr[], int n){

    int res= arr[1]- arr[0];
    int mini = arr[0];

    for(int j=1;j<n;j++){

        res= max(res, arr[j]- mini);
        mini= min(mini,arr[j]);
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

    int ans = OptimizedDiff(arr,n);
    cout<<"MAximum Difference is "<<ans;
    return 0;
}