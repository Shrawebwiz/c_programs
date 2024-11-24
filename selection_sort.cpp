//FIND THE MINIMUM ELEMENT IN UNSORTED ARRAY AND SWAP IT WITH THE ELEMENT AT THE BEGINNING

#include<iostream>
using namespace std;
void Ssort(int a[],int n){
    int i,j,min;
    for(i=0;i<n-1;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
            int temp = a[min];
            a[min]=a[i];
            a[i]=temp;
        }
      for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
      }
}


int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the unsorted array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Ssort(arr,n);
  

    return 0;
}