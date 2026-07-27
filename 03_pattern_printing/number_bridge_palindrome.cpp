#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter no of rows : ";
    cin>>r;
    //printing left part of bridge.
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r;j++){
            if(i+j>r+1) cout<<" ";
            else cout<<j;
        }
        for(int j=r-1;j>=1;j--){
            if(i+j>r+1) cout<<" ";
            else cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
