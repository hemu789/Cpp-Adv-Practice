#include<iostream>

using namespace std;

int countDigit(int n){

    int res=0;
    while(n>0){

        res++;
        n=n/10;
    }

    return res;

}

int main(){


    int n; // 289 
    cout<<"Enter n";
    cin>>n;

    int ans= countDigit(n);
    cout<<ans;
    return 0;
}