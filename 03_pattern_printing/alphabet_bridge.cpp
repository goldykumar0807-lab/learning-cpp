#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter no of rows : ";
    cin>>r;
    //printing upper portion of bridge.
    for(int i=1;i<=(2*r-1);i++) cout<<(char)(64+i);
    cout<<endl;
    //printing left lower portion of bridge.
    for(int i=1;i<r;i++){
        int m=1;
        for(int j=1;j<=r;j++){
            if(i+j<=r) cout<<(char)(64+m);
            else cout<<" ";
            m++;
        }
        //printing right portion of bridge.
        for(int k=r-1;k>=1;k--){
            if(k+i<=r) cout<<(char)(64+m);
            else cout<<" ";
            m++;
    }
    cout<<endl;
    }
}
