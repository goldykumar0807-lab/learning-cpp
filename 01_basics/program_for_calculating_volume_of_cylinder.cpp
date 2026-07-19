//program for calculating volume of cylinder.
#include<iostream>
using namespace std;
int main() {
   float radius , height;
   cout<<"enter radius and height of cylinder : ";
   cin>>radius>>height;
   float volume = 3.14*radius*radius*height;
   cout<<"volume of cylinder : "<<volume<<" sq. units"<<endl;
   return 0;
  
}
