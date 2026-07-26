#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter no of rows : ";
    cin>>r;
    //printing upper part of bridge.
    for(int i=1;i<=(2*r-1);i++) cout<<"*";
    cout<<endl;
    //printing lower part of bridge.
    for(int i=r-1;i>=1;i--){
        for(int j=r-1;j>=1;j--){
            if(i+j>=r)    cout<<"*";
            else cout<<" ";
        }
        for(int k=1;k<=r;k++){
            if(i+k<=r) cout<<" ";
            else cout<<"*";
        }cout<<endl;
    }
    return 0;
}
