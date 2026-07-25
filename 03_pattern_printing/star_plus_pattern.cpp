#include<iostream>
using namespace std;
int main (){
int r; //r always odd.
cout<<"enter no of rows : ";
cin>>r;
for(int i=1;i<=r;i++){
    for(int j=1;j<=r;j++){
        if(j==(r+1)/2) cout<<"*";
        else if (i==(r+1)/2) cout<<"*";
        else cout<<" ";
    }
    cout<<endl;
}
return 0;
}
