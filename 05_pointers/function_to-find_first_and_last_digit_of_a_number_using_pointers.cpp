#include<iostream>
using namespace std;
void fun(int *p){
     int last=*p%10;
    cout<<"last digit is = "<<last<<endl;;
    while(*p>0){
        if(*p%10==*p) cout<<"first digit is = "<<*p;
        *p/=10;
    }
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    fun(&n);
}
