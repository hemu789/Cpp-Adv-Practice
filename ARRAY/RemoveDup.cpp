#include <bits/stdc++.h>
using namespace std;

 int removeDupSortedArray(int arr[], int n){

    int temp[n];

    temp[0]=arr[0]; // first elem is always unique
    int res=1; //size


    for(int i=0;i<n;i++){
        if(temp[res-1] != arr[i]) // not equal{
        {

            temp[res]=arr[i];
            res++;
        }
    }

    for(int i=0;i<res;i++){
        arr[i]=temp[i];
    }
    return res;
 }

 void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
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

   int size=removeDupSortedArray(arr,n);
   cout<<"Size is "<<size<<endl;
   print(arr,n);
    return 0;
}