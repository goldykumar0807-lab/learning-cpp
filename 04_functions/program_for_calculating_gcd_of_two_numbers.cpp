#include<iostream>
using namespace std;
int gcd(int x,int y){
    int gcd ;
    for(int i=1;i<=min(x,y);i++){
        if(x%i==0 && y%i==0) gcd=i;
    }
    return gcd;
}
int main(){
    int x,y;
    cout<<"enter two numbers : ";
    cin>>x>>y;
   cout<<"gcd of numbers : "<<gcd(x,y);
   return 0;
}
