#include<iostream>
using namespace std;
int main () {
    int a,b;
    cout<<"enter base and exponent : ";
    int pow=1;
    cin>>a>>b;
    for(int i=1;i<=b;i++){
        pow*=a;
    }
    cout<<"a raised to the power to b is : "<<pow;
    return 0;
    
}
