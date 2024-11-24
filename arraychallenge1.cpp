//MAX TILL I

#include<iostream>

using namespace std;

int max(int m,int a){
     if(m>a){
        return m;
     }
     else{
        return a;
     }
}
int main(){
  int mx=-1999;
  int n;
  cout<<"Enter the size of array: ";
  cin>>n;
  int arr[n];
  cout<<"Enter the array: ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  for(int i=0;i<n;i++){
    mx = max(mx,arr[i]);
    cout<<"MAX TILL"<<i<<" is: "<<mx<<endl;
  }
  

    return 0;
}