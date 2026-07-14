//calculate area of any triangle.
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    float a, b, c, s, area;
    cout<<"enter three sides of triangle : ";
    cin>>a>>b>>c;
    s=(a+b+c)/2; // s is the semi-perimeter of triangle.
    area = sqrt(s*(s-a)*(s-b)*(s-c)); //area of triangle using Heron's formula;
    cout<<"area of triangle : "<<area;
    return 0;
}
