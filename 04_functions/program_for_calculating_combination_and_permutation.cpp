#include<iostream>
using namespace std;
int fac(int n){
    int fac=1;
    for(int i=n;i>=1;i--){
        fac*=i;
    }
}
int combination(int n,int r){
    int ncr = fac(n)/(fac(r)*fac(n-r));
    return ncr;
}
int permutation(int n,int r){
    int npr = combination(n,r) * fac(r);
    return npr;
}

int main(){
    int n,r;
    cout<<"enter value of n and r : ";
    cin>>n>>r;
    cout<<"combination of n and r : "<<combination(n,r)<<endl;
    cout<<"permutation of n and r : "<<permutation(n,r)<<endl;
    return 0;
}
