#include<iostream>
#include<unordered_set>
using namespace std;

bool solve(int arr[], int n, int target){

    unordered_set<int> s;

    int pre_sum=0;

    for(int i=0;i<n;i++){
        pre_sum = pre_sum + arr[i];


        if(pre_sum == target){
            return true;
        }
        if(s.find(pre_sum - target)!=s.end()){
            return true;
        }
        s.insert(arr[i]);
    }
    return  false;
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