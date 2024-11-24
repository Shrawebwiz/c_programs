#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
        }
     const int N = 1e6+2;
     bool check[N];
     for(int i=0; i<N; i++){
        check[i] = false;
     }
     for(int i=0; i<n; i++){
        if(arr[i] >= 0 && arr[i] <= N){
            check[arr[i]] = true;
        }
     }
     int ans=-1;
     for(int i=1; i<N; i++){
        if(check[i] == false){
            ans = i;
            break;
        }
     }
     cout<<"ANSWER: "<<ans;

        return 0;
}