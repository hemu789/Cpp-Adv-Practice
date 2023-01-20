#include<bits/stdc++.h>

// Distinct Union 

using namespace std;

int main(){

    int a[4]={15,20,15,5};

    int b[5]={15,15,15,20,10};

    int c[9]={0};

    for(int i=0;i<4;i++){
        c[i]=a[i];
    }

    for(int i=0;i<9;i++){
        c[4+i]=b[i];
    }

    // c ke andr a n b dono elemts aa gye

    int res=0;

    for(int i=0;i<9;i++){
        bool flag=false;

        for(int j=0;j<i;j++){

            if(c[i]==c[j]){
                flag=true;
                break;
            }
        }

        if(flag!=true){
            res++;
        }

        
    }

    cout<<res;

    return 0;
}