//Now let's practise using a class with multiple calculation functions.
//Create a class Circle with a data member radius.
//Requirements:
//1. Create a member function area() that returns the area.
//2. Create a member function circumference() that returns the circumference.
//3. Create a member function display() that prints both results.
//4. Create an object, assign its radius, and call display().
//Use these formulas:
#include<iostream>
using namespace std;
class Circle{
    public:
    float radius;
    float circumference(){
        return 2*3.14*radius;
    }
    float area(){
        return 3.14*radius*radius;
    }
    void display(){
        cout<<"circumference is : "<<circumference()<<endl;
        cout<<"area is : "<<area()<<endl;
    }
};
int main(){
    Circle c1;
    c1.radius=10;
    c1.display();
}