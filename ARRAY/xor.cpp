
//xor : 
        // missing no
        // one unique ele 
        // two unique ele

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

    int uni=0;

    for(int i=0;i<n;i++){

        uni = uni ^ arr[i];
    }

    cout<<"unique  Elem is "<<uni;
    return 0;
}