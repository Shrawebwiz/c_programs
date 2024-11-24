#include<iostream>
using namespace std;

int main(){
    int n1,n2,m1,m2;
    cout<<"Enter the number of rows of first matrix: ";
    cin>>n1;
    cout<<"Enter the number of columns of first matrix: ";
    cin>>m1;
    cout<<"Enter the number of rows of second matrix: ";
    cin>>n2;
    cout<<"Enter the number of columns of second matrix: ";
    cin>>m2;

    int a1[n1][m1];
    int a2[n2][m2];

    cout<<"Enter the elements of first matrix: ";
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            cin>>a1[i][j];
        }
    }
    cout<<"Enter the second matrix: ";
    for(int i=0;i<n2;i++){
        for(int j=0;j<m2;j++){
            cin>>a2[i][j];
        }
    }
    int ans[n1][m2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<m2;j++){
            ans[i][j]=0;
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<m2;j++){
            for(int k=0;k<m1;k++){
                ans[i][j] += a1[i][k]*a2[k][j];
    }
}
    }
    cout<<"The matrix multiplication is: "<<endl;
for(int i=0;i<n1;i++){
    for(int j=0;j<m2;j++){
        cout<<ans[i][j]<<" ";
}
cout<<endl;
}
    
return 0;
}
