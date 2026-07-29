#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter two numbers : ";
    cin>>x>>y;
    int *p1=&x;
    int *p2=&y;
    int sum=*p1+*p2;
    cout<<"sum is = : "<<sum;
}
