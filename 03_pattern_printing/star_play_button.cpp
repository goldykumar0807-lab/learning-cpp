#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter no of rows : ";
    cin>>r;
    //printing upper triangle.
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i ;j++){
            cout<<"* ";
        }
        cout<<endl;
      }
      //printing lower triangle.
      for(int k=1;k<r;k++){
        for(int l=1;l<r+1-k;l++){
            cout<<"* ";
        }
        cout<<endl;
      }
    return 0;
}
