//type casting.
//problem 1
#include <iostream>
using namespace std;
int main() {
     int x;
    cout<<"enter value of x : ";
    cin>>x;
    float y = (float)x/2;
    cout<<"value of y is : "<<y;
    return 0;
}

//problem 2.
#include <iostream>
using namespace std;
int main() {
    float x;
    cout<<"enter value of x : ";
    cin>>x;
    int y = (int) x;
    cout<<"fractional part of x is : "<<x-y<<endl;
    return 0;
}
