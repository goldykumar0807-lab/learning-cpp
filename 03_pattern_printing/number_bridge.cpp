#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter no of rows : ";
    cin>>r;
    //printing upper part of number bridge.
    for(int i=1;i<=(2*r-1);i++) cout<<i;
    cout<<endl;
    //printing lower part of bridge.
    for(int i=r-1;i>=1;i--){
        int k=1;
        for(int j=r-1;j>=1;j--){
            if(i+j>=r) cout<<k;
            else cout<<" ";
            k++;
        }
        for(int j=1;j<=r;j++){
            if(i+j>r) cout<<k;
            else cout<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}
