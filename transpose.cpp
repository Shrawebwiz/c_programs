#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int m;
    cout<<"Enter the number of columns: ";
    cin>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter the "<<i<<","<<j<<" element: "<<endl;
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            int temp = a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
 
    }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
            }
            cout<<endl;
    }
       return 0;
    }
 
