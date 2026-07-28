#include<iostream>
using namespace std;
void odd(int a, int b){
    for(int i=a;i<=b;i++){
    if(i%2!=0) cout<<i<<" ";
    }
}
int main(){
    int a,b;
    cout<<"enter two numbers in ascending order : ";
    cin>>a>>b;
    odd(a,b);
    return 0;
}
