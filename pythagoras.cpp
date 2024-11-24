#include<iostream>
using namespace std;

bool check(int x,int y,int z){
    int a=max(x,max(y,z));
    int b,c;
    if(a==x){
        b=y;
        c=z;
    }
    else if(a == y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if(a*a == b*b+c*c){
        return true;
    }
    return false;

}

int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;

    if(check(n1,n2,n3)){
        cout<<"Pythagorian triplet";
    }
    else{
        cout<<"not a pythagorian triplet";
    }
       return 0;
}


