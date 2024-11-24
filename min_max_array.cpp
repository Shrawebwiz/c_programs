#include<iostream>
#include<climits>
using namespace std;

int main(){

    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
  int max_no = INT_MIN;
  int min_no = INT_MAX;

  for(int i=0;i<5;i++){
    if(arr[i]>max_no){
        max_no = arr[i];
    }
    if(arr[i]<min_no){
        min_no = arr[i];
    }
  }
  cout<<"The greatest number in the array is: "<<max_no<<endl;
  cout<<"The smallest number in the array is: "<<min_no<<endl;

    
return 0;    
}