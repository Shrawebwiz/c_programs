#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of days: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the visitors for "<<n<<"days: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max &&(i==n-1 || arr[i]>arr[i+1])){
            max=arr[i];
            cout<<"The recording breaking day is "<<i+1<<" with "<<max<<" number of visitors"<<endl;
    }
    else if(arr[i]>max){
        max=arr[i];
    }
}
return 0;
}