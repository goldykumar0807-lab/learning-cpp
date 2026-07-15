//calculating roots of quadratic equation.
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    float a, b, c, discriminant, root1, root2;
    cout<<"enter coefficients of quadratic equation (a, b, c) : ";
    cin>>a>>b>>c;
    cout<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0"<<endl;
    discriminant = b*b - 4*a*c;
    if(discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        cout<<"roots are real and distinct."<<endl;
        cout<<"root1 = "<<root1<<endl;
        cout<<"root2 = "<<root2<<endl;
    }
    else if(discriminant == 0) {
        root1 = root2 = -b / (2*a);
        cout<<"roots are real and equal."<<endl;
        cout<<"root1 = root2 = "<<root1<<endl;
    }
    else {
        float realPart = -b / (2*a);
        float imaginaryPart = sqrt(-discriminant) / (2*a);
        cout<<"roots are complex."<<endl;
        cout<<"root1 = "<<realPart<<" + "<<imaginaryPart<<"i"<<endl;
        cout<<"root2 = "<<realPart<<" - "<<imaginaryPart<<"i"<<endl;
    }
    return 0;
}
