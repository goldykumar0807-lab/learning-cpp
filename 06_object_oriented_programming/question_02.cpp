//Create a class named Rectangle with two data members: length and breadth.
#include<iostream>
using namespace std;
class rectangle{
    public:
    int length;
    int breadth;
    int area(){
        return length*breadth;
    }
};
int main(){
    rectangle r1;
    r1.length=40;
    r1.breadth=50;
    cout<<"area of rectangle is : "<<r1.area();
}