#include<iostream>
using namespace std;

int fact(int n){
    int f = 1;
    for(int i=1;i<=n;i++){
        f *= i;
    }
    return f;
}

int main(){
     int n,r;
     cin>>n>>r;

     int ans = fact(n)/(fact(r)*fact(n-r));
     cout<<"nCr is "<<ans;
     return 0;
}