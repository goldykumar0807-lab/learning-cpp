#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two numbers : ";
    cin>>a>>b;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            cout<<i;
            break;
        }
    }
}
