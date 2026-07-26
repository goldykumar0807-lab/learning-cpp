#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter no of rows : ";
    cin>>r;
    int nsp=r-1; // nsp represents no of spaces.
    int nst=1; // nst represents no of stars.
    for(int i=1;i<=r;i++){
        //printing spaces.
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        nsp--;
        //printing no of stars.
        for(int k=1;k<=nst;k++){
            cout<<"*";
        }
        nst+=2;
        cout<<endl;
    }
    return 0;
}
