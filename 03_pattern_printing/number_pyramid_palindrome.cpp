#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter no of rows : ";
    cin>>r;
    int nsp=r-1;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        } nsp--;
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        for(int l=i-1;l>0;l--){
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}
