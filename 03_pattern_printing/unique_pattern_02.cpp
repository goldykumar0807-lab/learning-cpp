#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter no of rows : ";
    cin>>r;
    //printing upper portion.
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r;j++){
            if(i+j<=r+1) cout<<"*";
            else cout<<" ";
        }
        for(int j=r-1;j>=1;j--){
            if(i+j<=r+1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    } 
    //printing lower part.
    for(int i=1;i<r;i++){
        for(int j=r;j>=1;j--){
            if(i+j>=r) cout<<"*";
            else cout<<" ";
        }
        for(int j=1;j<=r-1;j++){
            if(i+j>=r-1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
