#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int sum=0;
    if(n<0){
        n=-n;
    while(n>0){
        int digit=n%10;
        n=n/10;
        sum+=digit;
    }cout<<"sum of digits : "<<sum;
    }
    else{
         while(n>0){
        int digit=n%10;
        n=n/10;
        sum+=digit;
    }
    cout<<"sum of digits : "<<sum;
     }
    return 0;
}
