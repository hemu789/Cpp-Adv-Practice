#include <bits/stdc++.h>
using namespace std;


void LeftRotate(int arr[], int n){
    int temp= arr[0];

    for(int i=1;i<n;i++){
        arr[i-1]= arr[i];
    }
    arr[n-1]=temp;
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

    int arr[n];
    cout << "Enter array Element " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    LeftRotate(arr,n);
    print(arr, n);
    return 0;
}