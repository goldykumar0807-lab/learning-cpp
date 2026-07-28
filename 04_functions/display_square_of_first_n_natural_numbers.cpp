#include<iostream>
using namespace std;
long long sq(int n){
    int k;
        k=n*n;
    return k;
}
int main(){
    int n;
    cout<<"enter value of n : ";
    cin>>n;
    cout<<"squares of first "<<n<<" natural numbers are : "<<endl;
    for(int i=n;i>=1;i--){
    cout<<sq(i)<<" ";
    }
}
