#include<iostream>
using namespace std;


int sum_of(int i){
    int sum=0;
    for(int j=1;j<=i;j++){
         sum= sum +j;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<"Sum of first "<<n<<" natural numbers is: "<<sum_of(n);
    return 0;
}