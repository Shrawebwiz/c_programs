//REAPETEDLY SWAP TWO ADJACENT ELEMENTS IF THEY ARE IN THE WRONG ORDER

#include<iostream>
using namespace std;

void Bsort(int a[], int n){
    int i, j, temp;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                }
                }
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
    cout<<"Enter the unsorted array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Bsort(arr,n);
    return 0;
}