#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int fac=1;
    for(int i=n;i>=1;i--){
        fac*=i;
    }
    cout<<fac<<" is the factorial of "<<n<<" .";
    return 0;
}
