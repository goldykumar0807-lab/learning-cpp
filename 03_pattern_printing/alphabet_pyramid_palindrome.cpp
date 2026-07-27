#include<iostream>
using namespace std;
int main (){
    int r;
    cout<<"enter no of rows : ";
    cin>>r;
    //printing left portion of pyramid.
    for(int i=1;i<=r;i++){
        int k=i;
        for(int j=1;j<=r;j++){
            if(i+j>r){
                cout<<(char)(k+64);
                k--;
            }
            else cout<<" ";
        }
         int n=2;
        for(int m=r-1;m>=1;m--){
            if(m+i>r){
            cout<<(char)(n+64);
            n++;
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
