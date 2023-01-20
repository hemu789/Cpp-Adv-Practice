#include<iostream>
using namespace std;

bool solve(int arr[], int n, int target){

    for(int i=0;i<n;i++){
        int sum=0;

        for(int j=i;j<n;j++){
            sum = sum +arr[j];

        }
        if(sum==target){
            return true;
        }
    }
    return false;

}
int main(){

    // Subarray with zero sum (target =0 )

    int n;
    cout<<"Enter n "<<endl;
    cin>>n; 

    int target;
    cout<<"Enter Target "<<endl;
    cin>>target;

    int arr[n];
    cout<<"Enter Elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    bool ans= solve(arr,n,target);
    cout<<ans;
    return 0;
}