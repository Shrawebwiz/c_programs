#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                cout<<"Found the first repeating element: "<<a[i]<<"at the position: "<<i<<endl;
                break;
            }
            
            
        }       
    }
    return 0;
}