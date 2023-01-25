
#include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    int arr[n];

    cout<<"Enter element"<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=0;

    for(int i=0;i<n;i++){

        sum = sum + arr[i];
    }

    cout<<"Sum of Elem is "<<sum;
    return 0;
}