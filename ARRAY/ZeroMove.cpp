#include <bits/stdc++.h>
using namespace std;

void MovesZeroInRight(int arr[], int n)
{

    for(int i=0;i<n;i++){

        if(arr[i] == 0){
            for(int j=i+1;j<n;j++){
                if(arr[j] != 0){
                    swap(arr[i], arr[j]); // Move zero in left - > swap(arr[j], arr[i])
                }
            }
        }
    }
    
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
     MovesZeroInRight(arr, n);
    
    print(arr, n);
    return 0;
}