#include<iostream>
using namespace std ;
int main(){
    int x,y;
    cout<<"enter two numbers : ";
    cin>>x>>y;
    int *p1=&x;
    int *p2=&y;
    cout<<" sum is = "<<*p1+*p2<<endl;
    int **p3=&p1;
    int **p4=&p2;
    int sum= **p3+**p4;
    cout<<" sum is = "<<sum<<endl;
    cout<<&p1<<" "<<&p2<<endl;
    cout<<p3<<" "<<p4;
}
