#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    char arr[n+1];
    cout<<"Enter the character array: ";
    cin>>arr;
    bool check = true;

    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            check = false;
            break;
        }
    }
    if(check == true){
        cout<<"The word is a palindrome";
    }
    else{
        cout<<"The word is not a palindrome";
    }
}