#include<iostream>
using namespace std;
int main() {
    bool prime=true;
    int n ;
    cout<<"enter a number : ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=false;
            break;
        }
    }     if(prime){
            cout<<n<<" is a prime no.";
        }else{
            cout<<n<<" is not a prime no.";
        }
    
}
