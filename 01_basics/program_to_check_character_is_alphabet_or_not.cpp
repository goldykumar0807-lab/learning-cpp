#include<iostream>
using namespace std;
int main() {
    char ch1;
    cout<<"enter a character : ";
    cin>>ch1;
    int x = (int)ch1 ;
    if((x>=65 && x<=90) || (x>=97 && x<=122)) {
        cout<<"character is alphabet"<<endl;
    }
    else {
        cout<<"character is not alphabet"<<endl;
    }

}
    
