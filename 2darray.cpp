#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<"Enter the number of columns: ";
    cin>>m;
    
    int a[n][m];
    cout<<"Enter the elements of the matrix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int max=a[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]>max){
                max=a[i][j];
                }
                }
                }
                cout<<"Maix is: "<<max<<endl;
                cout<<"Matrix is:"<<endl;
                for(int i=0;i<n;i++){
                    for(int j=0;j<m;j++){
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
    return 0;
}