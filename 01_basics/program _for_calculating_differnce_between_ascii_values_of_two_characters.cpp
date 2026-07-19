//program for calculating difference between ASCII values of two characters.
#include<iostream>
using namespace std;
int main() {
    char ch1 , ch2 ;
    cout<<"enter first and second character : ";
    cin>>ch1>>ch2;
    int x = (int)ch1;
    int y = (int)ch2;
    if(x>y) {
        cout<<"difference of ASCII values of "<<ch1<<" and "<<ch2<<" is : "<<x-y<<endl;
    } else {
    cout<<"difference of ASCII values of "<<ch1<<" and "<<ch2<<" is : "<<y-x<<endl;
    }
    return 0;
}
