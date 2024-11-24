#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0;
    int originaln=n;
    while(n>0){
        int last_digit = n%10;
        sum+= last_digit*last_digit*last_digit;
        n=n/10;
    }
    if(sum==originaln){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"not an armstrong";
    }

    return 0;
}