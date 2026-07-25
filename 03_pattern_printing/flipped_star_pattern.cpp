#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter no of rows : ";
    cin>>r;
    //printing upper triangle.
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r;j++){
            if(i+j>=r+1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    //printing lower triangle.
    for(int k=r-1;k>=1;k--){
        for(int l=1;l<=r;l++){
            if(k+l>=r+1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
