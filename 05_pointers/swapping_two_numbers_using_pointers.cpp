#include<iostream>
using namespace std;
void swap(int *x, int *y){ //pointers
    int temp = *x;         //*x is the new way to access the value of x.
    *x=*y;                 //this method is known as pass by reference.
    *y=temp;
   cout<<*x<<" "<<*y;
}
int main(){
    int x,y;
    cout<<"enter two numbers : ";
    cin>>x>>y;
    swap(&x,&y);
}
