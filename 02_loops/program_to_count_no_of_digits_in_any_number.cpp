#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter a number :";
    cin>>n;
    int sum=1;
    if(n<0){
        n=-n;
         while(n/=10){
        sum++;
    }
    cout<<"no of digits in number : "<<sum;
    }else{
          while(n/=10){
        sum++;
    }
    cout<<"no of digits in number : "<<sum;
    }
    return 0; 
}
