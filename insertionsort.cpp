//INSERT AN ELEMENT FROM UNSORTED ARRAY TO ITS CORRECT POSITION IN SORTED ARRAY

#include<iostream>
using namespace std;

void Isort(int a[],int n){
    int i,j,x;
    for(i=1;i<n;i++){
        x=a[i];
        j=i-1;
        while(j>=0 && a[j]>x){
            a[j+1]=a[j];
            j=j-1;
            }
            a[j+1]=x;
            }
            for(int k=0;k<n;k++){
                cout<<a[k]<<" ";
            }
            }



int main(){
      int n;
      cout<<"Enter the size of the array: ";
      cin>>n;
      int arr[n];
      cout<<"Enter the elements of sorted array: ";
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      Isort(arr,n);




    return 0;
}