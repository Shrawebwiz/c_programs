#include<iostream>
using namespace std;

int main(){

    
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key: ";
    cin>>key;
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            cout<<"Element found at "<<i<<"th location";
            break;
    }
}
 
  
return 0;
}