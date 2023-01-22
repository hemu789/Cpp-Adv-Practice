#include <bits/stdc++.h>
using namespace std;

void leader(int arr[], int n)
{

    int curr_ldr = arr[n - 1]; // Last val is always leader
    cout << curr_ldr << " ";
    for (int i = n - 2; i >= 0; i--)
    {

        if (curr_ldr < arr[i])
        {
            curr_ldr = arr[i];
            cout << curr_ldr << " ";
        }
    }
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

    leader(arr, n);
    //reverse(arr, arr + n);
    //     reversefun(arr,n);
   // cout << endl;
   // print(arr, n);
    return 0;
}