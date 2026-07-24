#include<iostream>
using namespace std;
int main() {
    int n;
    bool composite = true;
    cout<<"enter a number : ";
    cin>>n;
    if(n<=1){
        cout<<"neither prime nor composite.";
    }
    for(int i=2;i<n;i++){
        if(n%i!=0){
            composite=false;
            break;
        }
    }if(composite){
        cout<<n<<" is a composite no.";
    }else{
        cout<<n<<" is not a composite no.";
    }
       }
