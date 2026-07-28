#include<iostream>
using namespace std;
long long fac(int n){
    long long fac=1;
    for(int i=n;i>=1;i--){
        fac*=i;
    }
    return fac;
}
long long combination(int n,int r){
    long long ncr = fac(n)/(fac(r)*fac(n-r));
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
