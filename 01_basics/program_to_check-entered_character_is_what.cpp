#include<iostream>
using namespace std;
int main() {
    char ch;
    cout<<"enter character : "<<endl;
    cin>>ch;
    int x = (int) ch;
    if( (x>=65 && x<=90) || (x>=97 && x<=122) ){
        cout<<"entered character is an alphabet "<<endl;
    }else if (x>=48 && x<=57){
        cout<<"entered character is a number ";
    }else{
        cout<<"entered character is a special character ";
    }
    return 0;

}
