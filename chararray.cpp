#include<iostream>
using namespace std;

int main(){
    int n,i=0;
    cout << "Enter the number of elements: ";
    cin >> n;
    char arr[n+1];
    cout<<"Enter the character array: ";
   cin>>arr;
    while(arr[i]!='\0'){
        cout << arr[i]<<endl;
        i++;
    }
    return 0;
}