#include<iostream>
using namespace std;
void digits(int n){
    int t=n;
    int digit=0;
    while(n>0){
        n/=10;
        digit++;
    }
    cout<<"no of digits in "<<t<<" is "<<digit;
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    digits(n);
    return 0;
}
