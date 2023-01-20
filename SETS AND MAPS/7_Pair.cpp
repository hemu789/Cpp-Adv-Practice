#include<bits/stdc++.h>
using namespace std;

bool solve(int arr[], int n,int target){

    int s=0;
    int e=n-1;

    while(s<=e){

        if(arr[s]+ arr[e]!= target){
            if(arr[s]+arr[e]<target){
                s++;
            }
            else{
                e--;
            }
        }
        if(arr[s]+arr[e]==target){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cout<<" enter n "<<endl;
    cin>>n;

    int t;
    cout<<"Enter tArget "<<endl;
    cin>>t;



    int arr[n];

    cout<<"Enter Element in array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if (solve(arr,n,t)){
        cout<<"Yes";
    }
    else{
        cout<<"Not";
    }
    return 0;
}