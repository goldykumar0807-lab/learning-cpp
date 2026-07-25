#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int m,n;
    cout<<"enter two numbers in ascending order : ";
    cin>>m>>n;
    for(int i=m;i<=n;i++){
        int digits=0;
        int x=i;
        //no of digits 
        while(x>0){
            digits++;
            x/=10;
        }
        // sum of each digit raised to the power no of digits.
        int sum=0;
        int y=i;
        while(y>0){
            int digit=y%10;
            sum+= round (pow(digit,digits));
            y/=10;
        }if(i==sum) cout<<i<<", ";
    }
    return 0;
}
