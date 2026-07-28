#include<iostream>
using namespace std;
int fac(int n){
    int fac=1;
    for(int i=n;i>=1;i--){
        fac*=i;
    }
    return fac;
}
int combination(int n,int r){
    int ncr = fac(n)/(fac(r)*fac(n-r));
    return ncr;
}
int main(){
    int n;
    cout<<"enter no of rows : ";
    cin>>n;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
