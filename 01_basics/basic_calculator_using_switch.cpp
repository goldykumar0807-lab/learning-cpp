//basic calculator for arithmetic operator.
#include<iostream>
using namespace std;
int main() {
    float num1, num2;
    char op;
    cout<<"enter two numbers : ";
    cin>>num1>>num2;
    cout<<"enter operator (+, -, *, /) : ";
    cin>>op;
    switch(op) {
        case '+':
            cout<<num1<<" + "<<num2<<" = "<<num1+num2;
            break;
        case '-':
            cout<<num1<<" - "<<num2<<" = "<<num1-num2;
            break;
        case '*':
            cout<<num1<<" * "<<num2<<" = "<<num1*num2;
            break;
        case '/':
            if(num2 != 0) {
                cout<<num1<<" / "<<num2<<" = "<<num1/num2;
            }
            else {
                cout<<"division by zero is not allowed.";
            }
            break;
        default:
            cout<<"invalid operator.";
    }
    return 0;
}
