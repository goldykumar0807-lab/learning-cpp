#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int rev=0;
    if(n<0){
        n=-n;
    while(n>0){
        int digit=n%10;
        rev*=10;
        rev+=digit;
        n/=10;
    }
    cout<<-rev<<" is the reverse of number";
    }else{
        while(n>0){
        int digit=n%10;
        rev*=10;
        rev+=digit;
        n/=10;
    }
    cout<<rev<<" is the reverse of number";
    }
    return 0;
}
