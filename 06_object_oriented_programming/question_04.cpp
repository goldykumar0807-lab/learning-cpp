//Create a class named Calculator with two integer data members, a and b.
#include<iostream>
using namespace std;
class Calculator{
    public:
    int num1;
    int num2;
    int sum(){
        return num1+num2;
    }
    int difference(){
        return num1-num2;
    }
    int product(){
        return num1*num2;
    }

};
int main(){
    Calculator c1;
    c1.num1=4;
    c1.num2=5;
    cout<<"sum is : "<<c1.sum()<<endl;
    cout<<"difference is : "<<c1.difference()<<endl;
    cout<<"product is : "<<c1.product()<<endl;

}