//SUBAARAY is the continuous part of the array
// number of subarrays of an array with n elements = nC2 + n = n*(n+1)/2
//SUBSEQUENCE is a sequence that can be derived an array by selecting zero or more elements, without changing the order of the remaining elements = 2^n

#include<iostream>
using namespace std;

int main(){
    
  //Sum of all subarrays
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        for(int j=i+1;j<n;j++){
            sum+=arr[j];
            cout<<"arr[j]: "<<arr[j]<<endl;
            }
            }
            cout<<"Sum of all subarrays: "<<sum<<endl;



    return 0;

}