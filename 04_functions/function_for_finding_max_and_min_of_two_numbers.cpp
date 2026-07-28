#include<iostream>
using namespace std;
int min(int a,int b){
    if(a>b) return b;
    else return a;
}
int max(int a,int b){
    if(a>b) return a;
    else return b;
}
int main(){
    int x,y;
    cout<<"enter two numbers :";
    cin>>x>>y;
    cout<<"minimum of "<<x<<" and "<<y<<" is "<<min(x,y)<<endl;
    cout<<"maximum of "<<x<<" and "<<y<<" is "<<max(x,y);
    return 0;
}
