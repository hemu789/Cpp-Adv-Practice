#include<iostream>
using namespace std;

bool power2(int n){

    if(n==0){
        return false;
    }

    return ((n & (n-1)) == 0);
}

int main(){

    int n;
    cout<<"Enter n ";
    cin>>n;

    bool ans= power2(n);

    if(ans){
        cout<<"Power Of 2 "<<endl;
    }
    else{
        cout<<"Not ";
    }
    return 0;
}