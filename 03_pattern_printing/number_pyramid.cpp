#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter no of rows : ";
    cin>>r;
    //printing left part of pyramid.
    for(int i=1;i<=r;i++){
        int k=1;
        for(int j=1;j<=r;j++){
            if(i+j>r) {
                cout<<k;
                k++;
            }
            else cout<<" ";
        }
        //printing left part of pyramid.
        for(int m=r-1;m>=1;m--){
            if(m+i>r){
                cout<<k;
                k++;
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
