//nature of roots.
#include<iostream>
using namespace std;
int main() {
    float a, b, c, discriminant;
    cout<<"enter coefficients of quadratic equation (a, b, c) : ";
    cin>>a>>b>>c;
    cout<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0"<<endl;
    discriminant = b*b - 4*a*c;
    if(discriminant > 0) {
        cout<<"roots are real and distinct.";
    }
    else if(discriminant == 0) {
        cout<<"roots are real and equal.";
    }
    else {
        cout<<"roots are complex.";
    }
    return 0;
}
