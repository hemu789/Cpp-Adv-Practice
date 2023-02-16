#include<iostream>

using namespace std;

int main()
{

    int a, b;
    cout<<"A nd B "<<endl;
    cin>>a;
    cin>>b;

    //sum without using + operator

    int ans= a | b;

    cout<<ans;

    return 0;
}