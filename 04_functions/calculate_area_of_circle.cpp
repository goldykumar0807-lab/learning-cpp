#include<iostream>
#include<cmath>
using namespace std;
double area(int r){
    double a=M_PI*r*r;
    return a;
}
int main(){
    int r;
    cout<<"enter radius of circle : ";
    cin>>r;
    cout<<"area of circle is : "<<area(r);
}
