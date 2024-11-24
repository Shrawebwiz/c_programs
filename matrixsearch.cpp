#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int m;
    cout<<"Enter the number of columns: ";
    cin>>m;
    int arr[n][m];
    cout<<"Enter the elements of the matrix: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
            }
            }
           int key;
           cout<<"enter the element you want to search: ";
           cin>>key;
           int flag=0;
           int r=0,c=m-1;
           while(r<n && c>=0){
            if(arr[r][c]==key){
                flag=1;
                break;
                }
                else if(arr[r][c]>key){
                    c--;
                    }
                    else{
                        r++;
                        }
                        }
                        if(flag==1){
                            cout<<"Element found at row "<<r+1<<" and column "<<c+1<<endl
                            ;
                            }
                            else{
                                cout<<"Element not found";
                                }
                                return 0;
            
}