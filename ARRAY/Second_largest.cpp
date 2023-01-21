#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n)
{

    int maxi = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[maxi] < arr[i])
        {
            maxi = i; // maxi index
        }
    }
    return maxi;
}

int second_Largest(int arr[], int n)
{

    int maxi = largest(arr, n); // maxi = largest ele
    int res = -1;               // index

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[maxi])
        {
            if (res == -1)
            {
                res = i;
            }
            else if (arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
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

    int index = second_Largest(arr, n);

    cout<<"Second Largest is at "<<index;

    return 0;
}