#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter no of rows : ";
    cin>>r;
    //printing left portion of pyramid.
    for(int i=1;i<=r;i++){
        int k=1;
        for(int j=1;j<=r;j++){
            if(i+j>r){
                cout<<(char)(k+64);
                k++;
            }
            else cout<<" ";
        }
        // printing right side of pyramid.
        for(int m=r-1;m>=1;m--){
            if(m+i>r){
                cout<< (char)(k+64);
                k++;
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
