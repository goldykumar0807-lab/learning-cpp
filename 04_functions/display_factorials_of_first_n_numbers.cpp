#include<iostream>
using namespace std;
long long fac(int n){
    long long fac=1;
    for(int i=n;i>=1;i--){
        fac*=i;
    }
    return fac;
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    cout<<"factorial of first "<<n<<" numbers : "<<endl;
    for(int i=n;i>=1;i--){
        cout<<fac(i)<<" ";
    }
    return 0;

}
