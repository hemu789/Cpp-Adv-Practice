#include<iostream>
using namespace std;

bool Palind(int n){

    //121 yes
    int ori=n;
    int rem=0;
    int num=0;

    while(n>0){
        rem = n%10;
        num = num *10 +rem;
        n=n/10;
    }
    return (ori == num);
}

int main()
{

    int n; // 289
    cout << "Enter n "<<endl;
    cin >> n;

    bool ans = Palind(n);
    cout << ans;
    return 0;
}