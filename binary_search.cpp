#include<iostream>
using namespace std;

void Bsearch(int a[], int n, int key){
    int low = 0;
    int high = n - 1;
    
    while(low <= high){
        int mid = (low + high) / 2;  // Move mid calculation here
        if(a[mid] == key){
            cout << "Element found at " << mid << "th location" << endl;
            return;  // Exit the function if the element is found
        }
        else if(a[mid] > key){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    
    // If the element was not found
    cout << "Element not found" << endl;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int a[n];
    cout << "Enter a sorted array: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;
    
    Bsearch(a, n, key);  // Pass the array a and its size n correctly
    
    return 0;
}
